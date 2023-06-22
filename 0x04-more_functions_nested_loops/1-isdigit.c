#include "main.h"
/**
 * _isdigit - function check if the value digit or not
 *
 * @c: value that ill be checked
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
