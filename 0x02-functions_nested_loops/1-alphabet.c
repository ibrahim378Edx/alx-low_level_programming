#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char alpha;
alpha = 'a';
while (alpha < 123)
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
}
