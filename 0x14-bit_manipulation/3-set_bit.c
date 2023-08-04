#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - change the value of bit at certain index
  *
  * @n: The number to modify
  *
  * @index: The index 
  *
  * Return: 1 one or success or -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > ((sizeof(unsigned long int) * 8) - 1))
{
return (-1);
}
*n = *n | (1 << index);
return (1);
}