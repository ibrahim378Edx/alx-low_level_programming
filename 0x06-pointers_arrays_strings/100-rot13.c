#include "holberton.h"
/**
 * *rot13 - function that encodes a string
 *
 * @s: string to be encrypted
 *
 * Return: returns the string
 */
char *rot13(char *s)
{
int i;
char *p = s;
char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (*s != '\0')
{
i = 0;
while (i < 53)
{
if (*s == original[i])
{
*s = code[i];
break;
}
i++;
}
s++;
}
return (p);
}
