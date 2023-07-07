#include <stdio.h>
/**
 * main - prints argv
 *
 * @argc: well argc
 *
 * @argv: well argv
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
