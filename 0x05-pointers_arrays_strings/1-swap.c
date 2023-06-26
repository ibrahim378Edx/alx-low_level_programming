#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values
 *
 * @a: holds the value that im gonna changes
 *
 * @b: other values to changes
 *
 * Return: nothing i dont  need to using pointers mostly atleast for this
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
