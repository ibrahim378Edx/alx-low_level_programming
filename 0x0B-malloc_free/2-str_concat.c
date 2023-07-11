#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *w);

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
i = 0, l1 = length(s1), l2 = length(s2), z = 0;
q = malloc(sizeof(char) * (l1 + l2 + 1));
if (q == NULL)
{
return (NULL);
}
if (s1 == NULL && s2 == NULL)
{
q[0] = '\0';
return (q);
}
else if (s2 == NULL && s1 != NULL)
{
while (s1[z] !=  '\0')
{
q[z] = s1[z];
z++;
}
return (q);
}
else if (s1 == NULL && s2 != NULL)
{
while (s2[i] != '\0')
{
q[z] = s2[i];
i++;
z++;
}
return (q);
}
else if (s1 != NULL && s2 != NULL)
{
while (s1[z] != '\0')
{
q[z] = s1[z];
z++;
}
while (s2[i] != '\0')
{
q[z] = s2[i];
z++;
i++;
}
return (q);
}
return (q);
}

/**
 * length - gets length of string
 *
 *  @w: string
 *
 * Return: length
*/

int length(char *w)
{
int l1;
l1 = 0;
if (w != NULL)
{
while (w[l1] != '\0')
{
l1++;
}
}
return (l1);
}
