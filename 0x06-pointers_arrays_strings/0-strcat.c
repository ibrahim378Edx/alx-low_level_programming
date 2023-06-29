#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates strings
 *
 * @dest: the string that ill get the copy
 *
 * @src: the source string that will copy
 *
 * Return: the string needed
 */
char *_strcat(char *dest, char *src)
{
int len;
int i = 0;
len = strlen(src);
while (i < len + 1)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
