#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - iterate over array
 *
 * @array: array to iterator over
 *
 * @size: array size
 *
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
