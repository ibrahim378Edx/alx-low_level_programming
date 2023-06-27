#include <stdio.h>
#include "main.h"
/**
 * print_array - prints values from array
 *
 * @a: array to print
 *
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
