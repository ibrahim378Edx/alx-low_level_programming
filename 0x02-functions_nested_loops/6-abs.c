#include "main.h"
/**
 * _abs - computes absoulte value of an int
 *
 * @a: int value to preform on
 *
 * Return: 0 always
 */
int _abs(int a)
{
if (a < 0)
{
a = a * -1;
_putchar(a);
return (a);
}
else
{
_putchar(a);
return (a);
}
}
