#include "main.h"
/**
 * print_diagonal - prints space and a back slash
 *
 * @n: number of times spaces and new lines prints
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, l;
for (i = 0; i < n; i++)
{
	for (l = n - i; l < n; l++)
	{
		_putchar(' ');
	}
_putchar(92);
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
