#include "lists.h"

/**
 * dlistint_len - returns counter of the elements
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
{
return (count);
}
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
