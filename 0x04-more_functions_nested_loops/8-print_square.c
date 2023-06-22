#include "main.h"
/**
 * print_square - print square for some reasons
 *
 * @size: value of the square dimensions
 *
 * Return: nothing
 */
void print_square(int size)
{
int i, l;
for (i = 0; i < size; i++)
{
	for (l = 0; l < size; l++)
	{
		_putchar('#');
	}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
