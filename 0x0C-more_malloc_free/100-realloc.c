#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that realloc memory blocks
 *
 * @ptr: pointer
 *
 * @old_size: old amount of memory block
 *
 * @new_size: new amount to allocate
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *q;
unsigned int l;
l = 0;
q = malloc(new_size);
if (q == NULL)
{
return (NULL);
}
if (old_size == new_size)
{
return (ptr);
}
if (ptr == NULL)
{
q = malloc(new_size);
if (q == NULL)
{
return (NULL);
}
return (q);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
for (l = 0; l < old_size && l < new_size; l++)
{
q[l] = ((char *) ptr)[l];
}
free(ptr);
return (q);
}
