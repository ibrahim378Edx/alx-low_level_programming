#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet()
{
char alpha;
alpha = 'a';
while(alpha < 123)
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
}
