#include "lists.h"
/**
 * sum_listint - sums value
 *
 * @head: pointer to the head
 *
 * Return: value of the sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
if (head != NULL)
{
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
