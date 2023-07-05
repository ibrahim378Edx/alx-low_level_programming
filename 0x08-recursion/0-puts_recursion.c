#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print with recursion for some reason
 *
 * @s: char to print ig it is obvious
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*(s))
{
_putchar(*(s));
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
