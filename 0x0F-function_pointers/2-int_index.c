#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 *
 * @array: array to look in
 *
 * @size: of array
 *
 * @cmp: apointer to function
 *
 * Return: the index that has the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
