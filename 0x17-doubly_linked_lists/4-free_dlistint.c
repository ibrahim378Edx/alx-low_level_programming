#include "lists.h"

/**
 * free_dlistint - free double linked list
 *
 * @head: pointer to the head of the list.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *w = NULL;
while (head != NULL)
{
w = head->next;
free(head);
head = w;
}
}
