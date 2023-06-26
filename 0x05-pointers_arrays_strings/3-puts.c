#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints strings
 *
 * str: value to print
 *
 * Return: nothing to return
 */
void _puts(char *str)
{
write(STDOUT_FILENO, str, sizeof(str)-1);
}
