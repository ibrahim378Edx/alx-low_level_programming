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
int *q, l, m;
l = 0, m = min;
if (min > max)
{
return (NULL);
}
q = malloc(sizeof(int) * ((max - min) + 1));
if (q == NULL)
{
return (NULL);
}
while (m <= max)
{
q[l] = m;
m = m + 1;
l++;
}
return (q);
}
