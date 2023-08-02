#include "lists.h"
/**
 * reverse_listint - reverses linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to head of the linked list after reverse
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *onest = NULL;
listint_t *second = NULL;
if (head != NULL)
{
while (*head)
{
second = *head;
*head = (*head)->next;
second->next = onest;
onest = second;
}
*head = onest;
return (*head);
}
return (NULL);
}
