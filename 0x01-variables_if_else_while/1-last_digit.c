#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int z;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, z);
	}
	else if (z <= 5)
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, z);
	}
	else if (z == 0)
	{
		printf("Last digit of %d is %d and is 0", n, z);
	}
	return (0);
}
