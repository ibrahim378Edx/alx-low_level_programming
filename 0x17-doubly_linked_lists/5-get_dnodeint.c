#include "lists.h"

/**
 * get_dnodeint_at_index - return the number of the node
 *
 * @head: head pointer
 *
 * @index: index of the node to return
 *
 * Return: null if doesnt exist or number of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i;
tmp = head;
i = 0;
while (tmp != NULL)
{
if (i == index)
{
return (tmp);
}
tmp = tmp->next;
i++;
}
return (NULL);
}
