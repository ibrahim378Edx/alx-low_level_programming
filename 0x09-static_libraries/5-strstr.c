#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strstr - another locate substring function for some reason
 *
 * @haystack: string to look in
 *
 * @needle: string to look for
 *
 * Return: a pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;
int l, f;
l = 0;
while (*(needle + l) != '\0')
{
l++;
}
f = 0;
while (*(haystack + f) != '\0')
{
f++;
}
if (f < l)
{
return ('\0');
}
for (i = 0; i <= f - l; i++)
{
j = 0;
k = i;
while (*(needle + j) != '\0' && *(haystack + k) == *(needle + j))
{
j++;
k++;
}
if (*(needle + j) == '\0')
{
return (haystack + i);
}
}
return ('\0');
}
