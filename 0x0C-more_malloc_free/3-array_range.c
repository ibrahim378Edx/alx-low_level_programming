#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * array_range - puts values of array into another
 *
 * @min: minmum value
 *
 * @max: max value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *q, i, l;
i = 0, l = 0;
if (min > max)
{
return (NULL);
}
while (i < max)
{
i++;
}
q = malloc(sizeof(int) * i);
if (q == NULL)
{
return (NULL);
}
while (l <= max)
{
q[l] = l + min;
l++;
}
return (q);
}
