#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
unsigned long int l;
z = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (l = 0; l < strlen(argv[i]); l++)
{
if (argv[i][l] < 48 || argv[i][l] > 57)
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
printf("%d\n", z);
}
else
{
printf("0\n");
}
return (0);
}
