#include "main.h"
#include <stdio.h>
int sqrter(int i, int l);
/**
 * _sqrt_recursion - square root of a number
 *
 * @n: the number
 *
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
int z, d;

d = n % 10;
z = 0;
if (n < 0)
{
return (-1);
}
else if (d % 2 != 0 && d != 5)
{
return (-1);
}
else
{
return (sqrter(n, z));
}
}
/**
 * sqrter - thx for the boring tasks
 *
 * @n: number
 *
 * @z: number
 *
 * Return: sqrt
 */
int sqrter(int n, int z)
{
int vad;
vad = z *z;
if (n == vad)
{
return (z);
}
else
{
return (sqrter(n, z + 1));
}
}
