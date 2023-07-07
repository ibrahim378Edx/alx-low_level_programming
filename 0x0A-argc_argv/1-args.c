#include <stdio.h>
/**
 * main - printing argc
 *
 * @argc: well argc
 *
 * @argv: well argv
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d", argc - 1);
return (0);
}
