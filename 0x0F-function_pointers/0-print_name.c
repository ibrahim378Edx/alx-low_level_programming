#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints user input
 *
 * @name: name to print
 *
 * @f: function to use it to print
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
