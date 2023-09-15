#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at certain index
  *
  * @head: pointer to head
  *
  * @index: index to delete node at
  *
  * Return: 1 on success
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *c = NULL, *temp = NULL;
unsigned int l = 0;
if (head && *head)
{
l = dlistint_len(*head);
if (index > l)
{
return (-1);
}
if (index == 0)
{
return (delete_first_dnode(head));
}
c = get_dnodeint_at_index(*head, index);
if (c)
{
temp = c;
if (l - 1 == index)
{
c->prev->next = c->next;
}
else
{
c->prev->next = c->next;
c->next->prev = c->prev;
}
free(temp);
return (1);
}
}
return (-1);
}

/**
  * delete_first_dnode - Remove the first node
  *
  * @head: pointer to head
  *
  * Return: 1 on success
  */
int delete_first_dnode(dlistint_t **head)
{
dlistint_t *c = *head, *temp = NULL;
temp = c;
if (c->next)
{
c = c->next;
c->prev = temp->prev;
*head = c;
}
else
{
*head = NULL;
}
free(temp);
return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  *
  * @head: pointer to head
  *
  * @index: The index to look for
  *
  * Return: the requested node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int times = 0;
if (head)
{
while (temp != NULL)
{
if (times == index)
{
return (temp);
}
temp = temp->next;
++times;
}
}
return (NULL);
}

/**
  * dlistint_len - Counts nodes
  *
  * @h: pointer to head
  *
  * Return: count of linked list
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
