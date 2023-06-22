#include "main.h"
/**
 * print_line - print _ on user input
 *
 *@n: user input
 *
 * Return: nothing
 */
void print_line(int n)
{
int q;
if (n <= 0)
{
_putchar('\n');
}
for (q = 0; q <= n; q++)
{
_putchar(95);
}
}
