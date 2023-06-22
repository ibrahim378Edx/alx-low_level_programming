#include "main.h"
#include <stdio.h>
/**
 * main - function that prints from 1 to 100 and fizz/buzz/fizzbuzz
 *
 * Return: nothing
 */
int main(void)
{
int i = 0;
for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
		if (i != 100)
		{
			printf("Buzz ");
		}
		else
		{
			printf("Buzz");
		}
	}
	else
	{
		printf("%d ", i);
	}
}
printf("\n");
return (0);
}
