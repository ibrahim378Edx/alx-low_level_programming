#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - switchs bits
  *
  * @n: The number
  *
  * @index: The index
  *
  * Return: 1 on success, or -1 on error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < ((sizeof(unsigned long int) * 8) - 1))
{
*n = *n & ~(1 << index);
return (1);
}
return (-1);
}
