#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * rev_string - prints string in reverse
 *
 * @s: string to reverse
 *
 * Return: value of string length
 */
void rev_string(char *s)
{
int clen = strlen(s);
char *n = malloc(clen + 1);
int i, j;
unsigned int z;
for (i = clen - 1, j = 0; i >= 0; i--, j++)
{
n[j] = s[i];
}
for (z = 0; z < strlen(n); z++)
{
s[z] = n[z];
}
free(n);
}
