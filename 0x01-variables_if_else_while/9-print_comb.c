#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char z;

int i;

z = '0';

for (i = 0; i <= 9; i++)
{
putchar(z);
if(z != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
z += 1;
}
return (0);
}

