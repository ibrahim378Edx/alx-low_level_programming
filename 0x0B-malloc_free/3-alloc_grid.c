#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to 2d array
 *
 * @width: width of the array
 *
 * @height: height of the array
 *
 * Return: pointer to a pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **z;
int l, i;
z = (int **)malloc(sizeof(int *) * height);
if (z == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
z[i] = malloc(sizeof(int) * width);
if (z[i] == NULL)
{
return (NULL);
}
for (l = 0; l < height; l++)
{
z[i][l] = 0;
}
}
return (z);
}
