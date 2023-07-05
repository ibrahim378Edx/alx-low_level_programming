#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - a function for to get length of a string
 *
 * 
 * @s: string
 *
 * Return: length of the string as a integer
 */
int strlenq(char *c, int s);
int _strlen_recursion(char *s)
{
int i;
char *c;

c = s;
i = 0;

i += strlenq(c, i);
return (i);
}

int strlenq(char *c, int s)
{
if(*(c) == '\0')
{
return(s);
}
else
{
s = strlenq(c + 1, s) + 1;
}
return (s);
}
