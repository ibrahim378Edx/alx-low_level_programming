#include "lists.h"
/**
 * delete_nodeint_at_index - delete nodes at scpecified index
 *
 * @head: pointer to the head of the list
 *
 * @index: index of node to delete
 *
 * Return: 1 on success or -1 on fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *alt;
unsigned int z = 1;
temp = *head;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
alt = *head;
while (alt != NULL)
{
if (z == index)
{
temp = alt->next;
alt->next = temp->next;
free(temp);
return (1);
}
alt = alt->next;
z++;
}
return (-1);
}
