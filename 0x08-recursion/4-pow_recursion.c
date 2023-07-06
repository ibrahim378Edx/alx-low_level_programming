#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function to get power of something
 *
 * @x: number to get its power
 *
 * @y: the power it self
 *
 * Return: the value after calc
 */
int _pow_recursion(int x, int y)
{

if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}
