#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks if a machine big or little endianness
 *
 * Return: 1 for little , 0 for big endianness
 */

int get_endianness(void)
{
int q = 1;
char *w = (char *)&q;
if (*w)
{
return (1);
}
return (0);
}
