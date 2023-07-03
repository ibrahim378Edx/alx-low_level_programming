#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strchr - function that locates a charater in a string
 *
 * @s: array/string to look in
 *
 * @c: char to look for
 *
 * Return: a pointer to the first occurrence of the c variable or null
 */
char *_strchr(char *s, char c)
{
int i, len;
i = 0;
len = strlen(s);
while(i < len)
{
if(c == *(s + i))
{
return (s + i);
}
i++;
}
return ('\0');
}
