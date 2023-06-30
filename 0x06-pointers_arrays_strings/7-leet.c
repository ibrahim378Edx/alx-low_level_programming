#include "main.h"
/**
 *leet - a function encodes A,E,O,T,L to 4,3,0,7,1
 *
 *@s: string for encryption
 *
 *Return: pointer to s .
 */
char *leet(char *s)
{
char *m = "aeotl";
char *M = "AEOTL";
int x[] = {'4', '3', '0', '7', '1'};
int i;
char *p = s;
while (*s != '\0')
{
for (i = 0; i < 5; i++)
{
if (*s == *(m + i) || *s == *(M + i))
*s = x[i];
}
s++;
}
return (p);
}
