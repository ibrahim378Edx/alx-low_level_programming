#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char z;

z = 'a';
	while (z != 123)
	{
	putchar(z);
	z++;
	}
z = 'A';
	while (z != 91)
	{
	putchar(z);
	z++;
	}
putchar('\n');
return (0);
}
