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
for (q = 0; q < n; q++)
{
if (n <= 0)
{
_putchar('\n');
break;
}
_putchar('_');
}
_putchar('\n');
}
