#include "main.h"
#include <stdio.h>
/**
 * factorial - function for factorial
 *
 * @n: number to get factorial
 *
 * Return: number
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
