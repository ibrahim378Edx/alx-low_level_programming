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
char *q;

z = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
q = argv[i];
for (l = 0; l < strlen(q); l++)
{
if ((q[l] < 47 || q[l] > 57))
{
printf("Error\n");
return (1);
}
else
{

}
}
z += atoi(q);
q++;
}
printf("%d\n", z);
}
else
{
printf("0\n");
}
return (0);
}
