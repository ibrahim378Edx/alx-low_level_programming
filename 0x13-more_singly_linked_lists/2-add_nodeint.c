#include "lists.h"
/**
 * add_nodeint - add nodes at the start
 *
 * @head: pointer to head of the list
 *
 * @n: in value to add
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (!temp)
{
return (NULL);
}
if (head == NULL)
{
temp->n = n;
temp->next = NULL;
*head = temp;
return (temp);
}
else
{
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}
return (temp);
}
