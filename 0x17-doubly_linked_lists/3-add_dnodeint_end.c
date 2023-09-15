#include "lists.h"

/**
 *  add_dnodeint_end -  new node at the end
 *
 * @head: pointer to the head
 *
 * @n: value to add
 *
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;

temp = malloc(sizeof(dlistint_t));

if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
return (temp);
}
while ((*head)->next != NULL)
{
*head = (*head)->next;
}
(*head)->next = temp;
temp->prev = *head;
return (temp);
}
