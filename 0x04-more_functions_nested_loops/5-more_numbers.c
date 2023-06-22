#include "main.h"
/**
 * more_numbers - this function prints from 0 to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, z;
int m, q;
for (z = 0; z < 10; z++)
{
	for (i = 0; i < 15; i++)
	{
		if (i < 9)
		{
			_putchar(i + '0');
		}
		else
		{
			m = i / 10;
			q = i % 10;
			_putchar(m + '0');
			_putchar(q + '0');
		}
	}
_putchar('\n');
}
}
