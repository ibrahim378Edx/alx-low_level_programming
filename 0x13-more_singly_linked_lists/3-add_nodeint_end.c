#include "lists.h"
/**
 * add_nodeint_end - adds nodes at the end
 *
 * @head: pointer to the head of the lis
 *
 * @n: value to be added
 *
 * Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *k = *head;
listint_t *temp = malloc(sizeof(listint_t));
if (!temp)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
return (temp);
}
else
{
while (k->next != NULL)
{
k = k->next;
}
k->next = temp;
return (k);
}
}
