#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings
 *
 * @separator: just a separator between strings
 *
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list q;
va_start(q, n);
for (i = 0; i < n; i++)
{
char *l;
l = va_arg(q, char *);
if (l != NULL)
{
printf("%s", l);
}
else
{
printf("%s", "(nil)");
}
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}

