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
listint_t *k = *head;
listint_t *z = NULL;
if (head != NULL)
{
while (k != NULL)
{
z = k->next;
free(k);
k = z;
}
}
else
{
return;
}
*head = NULL;
}
