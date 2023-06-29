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
int len, len1;
int i = 0;
len = strlen(src);
len1 = strlen(dest);
while (i < len + 1)
{
*(dest + len1 + i ) = *(src + i);
i++;
}
return (dest);
}
