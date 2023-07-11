#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * argstostr -  concates execution args
  *
  * @ac: the arguments numbers
  *
  * @av: the argument strings
  *
  * Return: pointer to the new string
  */
char *argstostr(int ac, char **av)
{
int len, i, j, k;
char *q;

len = 0;
i = 0;
j = 0;
k = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (i < ac)
{
while (av[i][j])
{
len++;
j++;
}
j = 0;
i++;
}
q = malloc((sizeof(char) * len) +ac + 1);
i = 0;
while (av[i])
{
while (av[i][j])
{
q[k] = av[i][j];
k++;
j++;
}
q[k] = '\n';
j = 0;
k++;
i++;
}
k++;
q[k] = '\0';
return (q);
}
