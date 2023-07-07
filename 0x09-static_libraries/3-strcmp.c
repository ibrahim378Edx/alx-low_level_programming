#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares 2 strings
 *
 * @s1: 1st string
 *
 * @s2: 2nd string
 *
 * Return: 0 for same 1 if different
 */
int _strcmp(char *s1, char *s2)
{
int len1, i;
len1 = strlen(s1);
i = 0;
while (i < len1)
{
if (*(s1 + i) == *(s2 + i))
{
i++;
}
else if (*(s1 + i) < *(s2 + i))
{
return (*(s1 + i) -*(s2 + i));
}
else
{
return (*(s1 + i) -*(s2 + i));
}
}
return (0);
}
