#include "lists.h"

/**
 *  sum_dlistint - sums all of data and returns them
 *
 * @head: pointer to head
 *
 * Return: return 0 if list is empty or returns the sum
 */

int sum_dlistint(dlistint_t *head)
{
int value = 0;
dlistint_t *i;
for (i = head; i != NULL; i = i->next)
{
value += i->n;
}
return (value);
}
