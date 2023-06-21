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
z = a % 10;
_putchar(z + '0');
return (z);
}
