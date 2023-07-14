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
int *q, i, l, m;
i = 0, l = 0, m = min;
if (min > max)
{
return (NULL);
}
while (i < max)
{
i++;
}
q = malloc(sizeof(int) * (i + 1));
if (q == NULL)
{
return (NULL);
}
while (m <= max)
{
q[l] = l + min;
m = q[l];
l++;
}
return (q);
}
