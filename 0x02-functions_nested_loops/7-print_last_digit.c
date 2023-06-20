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
a = a % 10;
return (_putchar(a + '0');
}
