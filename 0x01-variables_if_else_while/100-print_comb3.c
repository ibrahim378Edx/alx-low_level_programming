#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;
	int x;
for (z = 0; z <= 9; z++)
{
	for (x = 0; x <= 9; x++)
	{
		if (z < x)
		{
			putchar(z + '0');
			putchar(x + '0');
		}


		if (z != 8  && z != x && z < x)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}


