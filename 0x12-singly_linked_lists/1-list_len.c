#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - linked list length
 *
 * @h: pointer to the head
 *
 * Return: linked list size
*/
size_t list_len(const list_t *h)
{
size_t counter = 0;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
