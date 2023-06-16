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

int w;

char q;

q = 'a';

z = '0';

for (i = 0; i <= 9; i++)
{
putchar(z);
z += 1;
}
for (w = 0; w <= 5; w++)
{
putchar(q);
q++;
}
putchar('\n');
return (0);
}

