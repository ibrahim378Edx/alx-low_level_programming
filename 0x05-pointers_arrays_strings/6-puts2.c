#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * puts2- prints string for some reasons
 *
 * @str: string to print
 *
 * Return: value of string length
 */
void puts2(char *str)
{
char c;
char n = '\n';
int clen = strlen(str);
int i;
for (i = 0; i < clen; i++)
{
c = str[i];
write(STDOUT_FILENO, &c, sizeof(c));
i++;
}
write(STDOUT_FILENO, &n, sizeof(n));
}
