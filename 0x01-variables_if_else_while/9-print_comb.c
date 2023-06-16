#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z;

int i;

z = '0';

for (i = 0; i <= 9; i++)
{
putchar(z);
if (z != 57)
{
putchar(',');
putchar(' ');
}
z += 1;
}
putchar('\n');
return (0);
}

