#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at any given location
 *
 * @head: pointer to the head
 *
 * @idx: index to add at
 *
 * @n: value to add
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp;
listint_t *alt;
unsigned int z = 1;
if (head != NULL)
{
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL); 
}
temp->n = n;
if (idx > 0)
{
alt = *head;
while (alt != NULL)
{
if (z == idx)
{
temp->next = alt->next;
alt->next = temp;
return(temp);
}
alt = alt->next;
z++;
}
if (idx > z)
{
return (NULL);
}
}
else
{
temp->next = *head;
*head = temp;
}
return(temp);
}
return (NULL);
}