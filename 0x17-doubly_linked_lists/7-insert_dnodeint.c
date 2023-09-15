#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at the given index
  *
  * @h: pointer to the head
  *
  * @idx: The index to add node at
  *
  * @n: The value to add
  *
  * Return: The address of the new node or null on fail
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = NULL, *temp = NULL;
unsigned int times = 0, l = 0;
if (h == NULL)
{
return (NULL);
}
if (*h == NULL && idx == 0)
{
return (add_dnodeint(h, n));
}
l = dlistint_len(*h);
if (idx == 0)
{
return (add_dnodeint(h, n));
}
else if (l == idx)
{
return (add_dnodeint_end(h, n));
}
current = *h;
while (current != NULL)
{
if (times == idx)
{
temp = create_node(n, current, current->prev);
current->prev = temp;
current = temp;
current->prev->next = temp;
return (temp);
}
current = current->next;
++times;
}
return (current);
}

/**
  * dlistint_len - Counts nodes
  *
  * @h: head of the list
  *
  * Return: Number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
int l = 0;
while (h != NULL)
{
++l;
h = h->next;
}
return (l);
}

/**
  * create_node - create a node
  *
  * @n: count of nodes in list
  *
  * @next: The next node of the new node
  *
  * @prev: The previous node of the new node
  *
  * Return: The address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
dlistint_t *w = NULL;
w = malloc(sizeof(dlistint_t));
if (w == NULL)
{
return (NULL);
}
w->n = n;
w->next = next;
w->prev = prev;
return (w);
}
