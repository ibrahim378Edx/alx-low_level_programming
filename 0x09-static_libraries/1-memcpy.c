#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - function that copy data from memory for some reason
 *
 * @dest: array to copy to
 *
 * @src: array to copy from
 *
 * @n: amount of bytes to copy from yay basically task 0 but switched
 *
 * Return: the dest array that i wanted to copy to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
