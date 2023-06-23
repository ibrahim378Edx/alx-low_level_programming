#include "main.h"
/**
 * print_triangle - this function makes triangle using # symbol
 *
 * @size: triangle height
 *
 * Return: nothing
 */
void print_triangle(int size)
{
int i, l, q;
if (size > 0)
{
for (i = 0; i < size; i++)
{
	for (l = i + 1; l < size; l++)
	{
		_putchar(' ');
	}
	for (q = size - i - 1; q < size; q++)
	{
		_putchar('#');
	
	}
_putchar('\n');
}
}
_putchar('\n');
}
