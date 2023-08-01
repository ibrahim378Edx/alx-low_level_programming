#include "lists.h"
/**
 * pop_listint - removes the head of the list
 *
 * @head: pointer to the head of the list
 *
 * Return: value of the n the head had
*/
int pop_listint(listint_t **head)
{
int z = (*head)->n;
listint_t *q = (*head)->next;
free(*head);
*head = q;
return (z);
}
