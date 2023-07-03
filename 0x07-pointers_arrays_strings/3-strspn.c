#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: array to get its length
 *
 * @accept: the sub prefix
 *
 * Return: the length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
int i, z;
int len, len1;
unsigned int counter;
counter = 1;
len = strlen(s);
len1 = strlen(accept);
for(i = 0; i <= len; i++)
{
	for(z = 0; z <= len1; z++)
	{
		if (*(s + z) == *(accept + i))
				{
				counter++;
				break;
				}
	}
}
return (counter);
}
