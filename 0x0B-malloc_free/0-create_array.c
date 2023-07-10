#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 *
 * @size: array size
 *
 * @c: char to add in array
 *
 * Return: no pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int z;
char *q;
q = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
else if (q == NULL)
{
return (NULL);
}
else
{
for (z = 0; z < size; z++)
{
q[z] = c;
}
return (q);
}
}
