#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: just a separator
 *
 * @n: number of values
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list q;
va_start(q, n);
for (i = 0; i < n; i++)
{
int l;
l = va_arg(q, int);
printf("%d", l);
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}

