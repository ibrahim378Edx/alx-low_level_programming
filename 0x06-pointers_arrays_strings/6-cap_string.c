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
int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
	, '{', '}'};
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
}
for (j = 0; j < 14; j++)
if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[j])
str[i] = str[i] - 32;
}
return (str);
}
