#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void free_list(list_t *head)
{
if(head == NULL)
{
return;
}
free_list(head->next);
free(head->str);
free(head);
}