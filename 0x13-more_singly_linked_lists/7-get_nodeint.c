#include "lists.h"
/**
 * get_nodeint_at_index - return the address of a certain node
 *
 * @head: pointer to the first node
 *
 * @index: which node to get
 *
 * Return: address to the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0;
size_t z = 0;
listint_t *q = head;
listint_t *l = head;
while (l != NULL)
{
z++;
l = l->next;
}
if (index > z)
{
return (NULL);
}
while (counter != index)
{
q = q->next;
counter++;
}
return (q);
}
