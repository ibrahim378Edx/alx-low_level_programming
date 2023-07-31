#include "lists.h"

/**
 * print_listint - prints a list
 *
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
