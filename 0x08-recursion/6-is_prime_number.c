#include "main.h"
#include <stdio.h>
#include <math.h>
int is_prime_helper(int n, int i);
/**
 * is_prime_number - function to check for prime number
 *
 * @n: number to check
 *
 * Return: the number
 */
int is_prime_number(int n)
{
return is_prime_helper(n, 2); 
}
/**
 * is_prime_helper - another function because we can use basic shit
 *
 * @n: number for prime
 *
 * @i: a acounter again because we cant use basic stuff
 *
 * Return: the actual number if prime or not
 */
int is_prime_helper(int n, int i) {
if (n < 2) 
{
return 0;
}
if (i > sqrt(n))
{
return 1;
}
if (n % i == 0)
{
return 0;
}
return is_prime_helper(n, i + 1);
}
