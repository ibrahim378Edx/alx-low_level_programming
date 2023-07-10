#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that return a pointer to newly allocated memory
 *
 * @str: the string
 *
 * return: pointer to the new string
 */
char *_strdup(char *str)
{
int z;
char *q;
q = malloc(sizeof(str));
if (str == NULL)
{
return (NULL);
}
else if (q == NULL)
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
