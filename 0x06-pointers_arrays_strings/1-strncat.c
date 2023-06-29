#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function that concatenates strings
 *
 * @dest: the string that ill get the copy
 *
 * @src: the source string that will copy
 *
 * @n: it will use at most n bytes from src
 *
 * Return: the string needed
 */
char *_strncat(char *dest, char *src, int n)
{
int  len1;
int i = 0;
len1 = strlen(dest);
while (i < n)
{
if (!*(src + i))
{
*(dest + len1 + i) = *(src + i);
i++;
}
else
{
break;
}
}
return (dest);
}

