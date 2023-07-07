#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * _puts - function that prints strings for some reason
 *
 * @str: string to print
 *
 * return: nothing
 */
void _puts(char *str)
{
long int s;
long int z;
char c = '\n';
s = write(STDOUT_FILENO, str, strlen(str));
z = write(STDOUT_FILENO, &c, sizeof(c));
}
