#include "main.h"
/**
 * print_last_digit - prints last digit of a value
 *
 * @a: value to work on
 *
 * Return: last value of the last digit
 */
int print_last_digit(int a)
{
int z;
if (a < 0)
{
a = a * -1;
}
z = a % 10;
_putchar(z + '0');
return (z);
}
