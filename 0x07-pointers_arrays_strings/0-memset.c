#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _memset - fills bytes with value
 *
 * @s: array to be changed
 *
 * @b: value to change to
 *
 * @n: number of bytes to change
 *
 * Return: pointer to the array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
