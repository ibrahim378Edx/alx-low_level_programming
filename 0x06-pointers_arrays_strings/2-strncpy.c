#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that concatenates strings
 *
 * @dest: the string that ill get the copy
 *
 * @src: the source string that will copy
 *
 * @n: it will use at most n bytes from src
 *
 * Return: the string needed
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int len = strlen(src);
while (i < n)
{
if (i < len)
{
*(dest +  i) = *(src + i);
i++;
}
else
{
*(dest + i) = '\0';
i++;
}
}
return (dest);
}
