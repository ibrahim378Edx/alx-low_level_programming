#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that return a pointer to newly allocated memory
 *
 * @str: the string
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
int z, l;
char *q;

if (str == NULL)
{
return (NULL);
}
z = 0;
l = strlen(str);
q = malloc((l + 1) * sizeof(char));
if (q == NULL)
{
return (NULL);
}
while (str[z] != '\0')
{
q[z] = str[z];
z++;
}
return (q);
}
