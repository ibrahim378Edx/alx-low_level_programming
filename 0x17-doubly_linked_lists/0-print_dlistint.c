#include "lists.h"

/**
 * print_dlistint - prints all the list
 *
 * @h: pointer to the head
 *
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{

int count = 0;

if (h == NULL)
{
return (count);
}
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
