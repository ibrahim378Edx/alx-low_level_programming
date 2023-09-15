#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start
 *
 * @head: poninter to the head
 *
 * @n: value to add
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = *head;
temp->prev = NULL;
if (*head != NULL)
{
(*head)->prev = temp;
}
*head = temp;
return (temp);
}
