#include "main.h"
/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
int i, z, l;
for (i = 0; i <= 9; i++)
{
l = 0;
for (z = 0; z <= 9; z++)
{
int q, m;
l = l + i;
if (l > 9)
{
q = l / 10;
m = l % 10;
if (z != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(q + '0');
_putchar(m + '0');
}
else
{
if (l <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(l + '0');
}
}
_putchar('\n');
}
}
