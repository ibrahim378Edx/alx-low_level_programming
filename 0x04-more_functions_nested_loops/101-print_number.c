#include "main.h"
/**
 * print_number - a function to print int
 *
 * @n: value to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	int z = n;

	if (n < 0)
	{
		_putchar('-');
		z = -z;
	}

	if ((z / 10) > 0)
		print_number(z / 10);

	_putchar((z % 10) + '0');
}
