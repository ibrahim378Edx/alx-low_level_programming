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
for (z = 0; z <= 9; z++)
{
        for (x = 0; x <= 9; x++)
        {
		for (y = 0; y <= 9; y++)
		{

               		if (z < x && x < y )
                	{
                        	putchar(z + '0');
                       		putchar(x + '0');
				putchar(y + '0');
                	}


                	if (z != 7 && x < y  && z != x && z < x)
                	{
                        	putchar(',');
                        	putchar(' ');
                	}
		}
        }
}
putchar('\n');
return (0);
}

