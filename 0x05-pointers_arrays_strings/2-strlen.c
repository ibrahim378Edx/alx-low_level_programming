#include "main.h"
#include <stdio.h>
/**
 * _strlen - gets the string length without null charater
 *
 * @s: string to count its length
 *
 * Return: value of string length
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
