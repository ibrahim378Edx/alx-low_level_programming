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
z += 1;
}
putchar('\n');
return (0);
}
