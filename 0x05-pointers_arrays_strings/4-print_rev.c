#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: string to reverse
 *
 * Return: value of string length
 */
void print_rev(char *s)
{
char c = '\n';
int clen = strlen(s);
char *n = malloc(clen + 1);
int i, j;
for (i = clen - 1, j = 0; i >= 0; i--, j++)
{
n[j] = s[i];
}
write(STDOUT_FILENO, n, strlen(n));
write(STDOUT_FILENO, &c, sizeof(c));
free(n);
}
