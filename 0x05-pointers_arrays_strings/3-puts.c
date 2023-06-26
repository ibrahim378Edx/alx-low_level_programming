#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * _puts - function that prints strings for some reason
 *
 * str: string to print
 *
 * return: nothing
 */
void _puts(char *str)
{
char c = '\n';
write(STDOUT_FILENO, str, strlen(str)+1);
write(STDOUT_FILENO, &c, 1);
}
