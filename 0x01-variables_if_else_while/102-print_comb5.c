#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z;
int x;
int y;
int m;
for (z = 0; z <= 9; z++)
{
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (x < m && z == y)
				{
					putchar(z + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(m + '0');
				}
				if (x < m && z == y && (z != 9 || x != 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}


