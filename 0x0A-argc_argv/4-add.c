#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 *
 * @argc: well argc
 *
 * @argv: well argv
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int i, z;

z = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (*argv[i] < 48 || *argv[i] > 57)
{
printf("Error\n");
return (1);
}
else
{
z += atoi(argv[i]);
}
}
}
else
{
printf("0\n");
}
printf("%d\n", z);
return (0);
}