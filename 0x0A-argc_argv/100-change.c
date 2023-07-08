#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 *
 * @argc: well argc
 *
 * @argv: well argv
 *
 * Return: nothing
 **/

int main(int argc, char *argv[])
{
int i, c;

i = 0;
c = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
while (i >= 25)
{
i -= 25;
c++;
}
while (i >= 10)
{
i -= 10;
c++;
}
while (i >= 5)
{
i -= 5;
c++;
}
while (i >= 2)
{
i -= 2;
c++;
}
if (i == 1)
{
c++;
}
printf("%d\n", c);
return (0);
}
