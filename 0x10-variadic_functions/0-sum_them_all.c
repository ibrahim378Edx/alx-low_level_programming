#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the values from arguments
 *
 * @n: first value
 *
 * Return: sum of all values
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, m;
va_list q;
va_start(q, n);
m = 0;
for (i = 0; i < n; i++)
{
int l;
l = va_arg(q, int);
m += l;
}
return (m);
}
