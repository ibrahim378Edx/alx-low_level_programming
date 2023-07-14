#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - function allocates memory for an array using malloc
 *
 * @nmemb: number of elements ithink
 *
 * @size: im guessing array's size
 *
 * Return: void pointer since complier can convert it to any type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *q;
if (nmemb <= 0 || size <= 0)
{
return (NULL);
}
q = malloc(nmemb * size);
if (q == NULL)
{
return (NULL);
}
memset(q, 0, nmemb * size);
return (q);
}
