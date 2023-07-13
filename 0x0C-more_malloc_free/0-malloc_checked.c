#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - functions allocates memory using malloc
 *
 * @b: size basically
 *
 * Return: void pointer since we dont know the datatype or changes
 */
void *malloc_checked(unsigned int b)
{
void *q;
q = malloc(b);
if (q == NULL)
{
exit(98);
}
return (q);
}
