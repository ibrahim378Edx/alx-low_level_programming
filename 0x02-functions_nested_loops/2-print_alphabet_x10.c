#include "main.h"
/**
 * print_alphabet_x10 - function that repeats print alpha 10 times
 *
 * Return: 0 for success
 */
void print_alphabet_x10(void)
{
int x;
char alpha;
x = 0;
while (x < 10)
{
	alpha = 'a';
	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
x++;
}
}
