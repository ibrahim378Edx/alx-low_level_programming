#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints values in linked list
 *
 * @h: pointer to head of list
 *
 * Return: size of the linked list
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
counter++;
}
return (counter);
}
