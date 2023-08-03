#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * binary_to_uint - binary to int
  *
  * @b: The binary to calc
  *
  * Return: the decimal calculated
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0, q = 0, s = 0;

	if (b == NULL)
    {
		return (0);
    }
	l = lengther(b);
	while (l--)
	{
		if (b[l] != 48 && b[l] != 49)
        {
			return (0);
        }
		if (b[l] == 49)
        {
			s += 1 << q;
        }
		q++;
	}

	return (s);
}

/**
  * lengther - counts the string length
  *
  * @str: String to count
  *
  * Return: length
  */
int lengther(const char *str)
{
	int count = 0;

	while (str[count])
    {
		count++;
    }
	return (count);
}