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
unsigned int counter;
counter = 0;
for (i = 0; *(s + i); i++)
{
	for (z = 0; z <= *(accept + z); z++)
	{
		if (*(s + i) == *(accept + z))
		{
			counter++;
			break;
		}
	}
if (*(accept + i) == '\0')
{
	break;
}
}
return (counter);
}
