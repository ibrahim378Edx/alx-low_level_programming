#include "main.h"
/**
 * more_numbers - this function prints from 0 to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, z, s;
int m[2];
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
			for (s = 0; s < 2; s++)
			{
				m[0] = i / 10;
				m[1] = i % 10;
				_putchar(m[s] + '0');
			}
		}
	}
_putchar('\n');
}
}
