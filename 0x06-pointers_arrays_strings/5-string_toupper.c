#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - function makes all letters upper
 *
 * @s: string to be converted
 *
 * Return: the string after conversion
 */
char *string_toupper(char *s)
{
int i, len;
len = strlen(s);
i = 0;
while (i < len - 1)
{
if ((*(s + i) <= 90 && *(s + i) > 65) || (*(s + i) <= 122 && *(s + i) >= 97))
{
if (*(s + i) >= 97 && *(s + i) <= 122)
{
*(s + i) = *(s + i) -32;
}
}
i++;
}
return (s);
}
