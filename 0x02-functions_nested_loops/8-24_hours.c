#include "main.h"
/**
 * jack_bauer - prints time for some reason
 *
 * Return: 0 always
 */
void jack_bauer(void)
{
int a;
int s;
int d;
int w;
for (a = 0; a <= 2; a++)
{
	for (s = 0; s <= 9; s++)
	{
		if ((a <= 1 && s <= 9) || (a <= 2 && s <= 3))
		{
			for (w = 0; w <= 5; w++)
			{
				for (d = 0; d <= 9; d++)
				{
				_putchar(a + '0');
				_putchar(s + '0');
				_putchar(58);
				_putchar(w + '0');
				_putchar(d + '0');
				_putchar('\n');
				}
			}
		}
	}
}
}
