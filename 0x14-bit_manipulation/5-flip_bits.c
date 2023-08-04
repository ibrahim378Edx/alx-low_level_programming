#include "main.h"

/**
  * flip_bits - finds out the number of flips to switch a number to another
  *
  * @n: first number
  *
  * @m: second number
  *
  * Return: number of flips needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int z = 0, counter = 0;
z = n ^ m;
while (z)
{
if (z & 1)
{
counter++;
}
z = z >> 1;
}
return (counter);
}
