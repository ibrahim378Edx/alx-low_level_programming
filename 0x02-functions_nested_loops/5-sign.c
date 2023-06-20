#include "main.h"
/**
 * print_sign - checks for ascii values
 *
 * @n: int value turns into ascii
 *
 * Return: 0 if equal to 0 , 1 if bigger than 0 , else -1
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
