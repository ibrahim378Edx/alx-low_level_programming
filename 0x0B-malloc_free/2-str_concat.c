#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate 2 strings together
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
int z, l1, l2, i;
char *q;

i = 0;
l1 = strlen(s1);
l2 = strlen(s2);
q = malloc(sizeof(char) * (l1 + l2 + 2));
z = 0;
if (q == NULL)
{
return (NULL);
}
while (s1[z] !=  '\0' && s1 != NULL)
{
q[z] = s1[z];
z++;
}
while (s2[i] != '\0' && s2 != NULL)
{
q[z] = s2[i];
i++;
z++;
}
return (q);
}
