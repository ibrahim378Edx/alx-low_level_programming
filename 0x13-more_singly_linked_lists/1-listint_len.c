#include "lists.h"
/**
 * listint_len - counts number of lements in a list
 *
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
counter ++;
h = h->next;
}
return (counter);
}
