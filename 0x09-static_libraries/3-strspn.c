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
	int z, i;
	unsigned int counter = 0;

	i = 0;
	z = 0;
	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				counter++;
			z++;
		}
		i++;
		z = 0;
	}
	return (counter);
}
