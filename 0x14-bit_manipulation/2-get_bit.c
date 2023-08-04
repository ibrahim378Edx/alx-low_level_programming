#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - get value at the index
  *
  * @n: The actual number
  *
  * @index: The index
  *
  * Return: the value at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int counter = 0;
while (n)
{
if (counter == index)
{
if (n % 2 == 1)
{
return (1);
}
else
{
return (0);
}
}
n = n / 2;
counter++;
}
if (index > counter && index < 63)
{
return (0);
}
return (-1);
}
