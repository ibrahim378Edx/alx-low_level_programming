#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_djb2 - A hash function to make djb2
  *
  * @str: The value
  *
  * Return: A number reps string
  */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hasher;
int c;
hasher = 5381;
while ((c = *str++))
{
hasher = ((hasher << 5) + hasher) +c;
}
return (hasher);
}
