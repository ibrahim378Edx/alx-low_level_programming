#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adding nodes to a linked list
 *
 * @head: pointer to the head of linked list
 *
 * @str: string to add into node
 *
 * Return: pointer to new nodes
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
unsigned int counter = strlen(str);
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
{
return (NULL);
}
if (head == NULL)
{
tmp->next = NULL;
tmp->str = strdup(str);
*head = tmp;
}
else
{
tmp->next = *head;
tmp->str = strdup(str);
*head = tmp;
}
tmp->len = counter;
return (tmp);
}
