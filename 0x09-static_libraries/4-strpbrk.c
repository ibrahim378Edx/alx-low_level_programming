#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - function that search a string for any of a set of bytes
 *
 * @s: main string
 *
 * @accept: substring to check
 *
 *Return: the pointer to it
 */
char *_strpbrk(char *s, char *accept)
{
int i, z;

i = 0;
z = 0;
while (*(s + i))
{
	while (*(accept + z))
	{
		if (*(s + i) == *(accept + z))
		{
			return (s + i);
		}
		z++;
	}
i++;
z = 0;
}
return ('\0');
}
