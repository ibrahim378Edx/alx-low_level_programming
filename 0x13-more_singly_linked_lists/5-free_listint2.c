#include "lists.h"
/**
 * free_listint2 - free lists and make head = NULL
 *
 * @head: pointer to head of the list
 *
 * Return:nothing
*/
void free_listint2(listint_t **head)
{
listint_t *k;
if (head != NULL)
{
while (*head != NULL)
{
k = *head;
*head = (*head)->next;
free(k);
}
}
else
{
return;
}
free(*head);
head = NULL;
}
