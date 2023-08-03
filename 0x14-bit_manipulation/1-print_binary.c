#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * print_binary - calculate and prints the binary value
  * 
  * @n: The value to calculate
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
calcBinary(n);
}

/**
  * CalcBinary - calc the binary value
  *
  * @n: the value to calc
  *
  * Return: nothing it just prints
  */
void calcBinary(unsigned long int n)
{
if (n < 1)
{
return;
}
calcBinary(n >> 1);
if (n & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}