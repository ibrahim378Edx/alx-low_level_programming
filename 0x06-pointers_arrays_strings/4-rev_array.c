#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array - function to reverse arrays
 *
 * @a: the array
 *
 * @n: number of elements
 *
 * Return: nothing since we are using pointers
 */
void reverse_array(int *a, int n)
{
int *z = malloc(n * sizeof(int));
int i;
i = 0;
while(i < n)
{
*(z + i) = *(a + n - i - 1);
i++;
}
i = 0;
while (i < n)
{
*(a + i) = *(z + i);
i++;
}
}
