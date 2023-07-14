#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int lengther(char *s);
/**
 * string_nconcat - a function to concatenate 2 strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: amount of charaters to take from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
unsigned int l1, l2, i, j;
l1 = lengther(s1), l2 = lengther(s2), i = 0, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= l2)
{
n = l2;
}
new = malloc(sizeof(char) * (n + l1 + 1));
if (new == NULL)
{
return (new);
}
while (s1[i] != '\0')
{
new[i] = s1[i];
i++;
}
while (j < n)
{
new[i] = s2[j];
i++;
j++;
}
new[i] = '\0';
return (new);
}

/**
 * lengther - gets length of string
 *
 * @s: string
 *
 * Return: the lengther
 */
int lengther(char *s)
{
int l1;
l1 = 0;
while (s[l1] != '\0')
{
l1++;
}
return (l1);
}
