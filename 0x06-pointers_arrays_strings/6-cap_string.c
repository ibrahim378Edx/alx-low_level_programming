#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * cap_string - cap every word in the string
  *
  * @s: the string it self
  *
  * Return: the string after being cap
  */
char *cap_string(char *s)
{
int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!'
	, '?', '"', '(', ')', '{', '}'};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
for (j = 0; j < 14; j++)
if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == symb[j])
s[i] = s[i] - 32;
}
return (s);
}
