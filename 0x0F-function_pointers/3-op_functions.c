#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - calc addition
  *
  * @a: first value
  *
  * @b: second value
  *
  * Return: result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calc subsitution
  *
  * @a: first value
  *
  * @b: second value
  *
  * Return: result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calc multiplcation
  *
  * @a: first number
  *
  * @b: second number
  *
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calc division
  *
  * @a: first number
  *
  * @b: second number
  *
  * Return: result
  */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
  * op_mod - calc module
  *
  * @a: first value
  *
  * @b: second value
  *
  * Return: return the number  calculated
  */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
