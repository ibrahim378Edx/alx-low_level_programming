#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees linked lists
 *
 * @head: head of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
if (head == NULL)
{
return;
}
free_list(head->next);
free(head->str);
free(head);
}
