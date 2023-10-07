#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index - Compute index of key
  *
  * @key: key
  *
  * @size: hash table size
  *
  * Return: The index of a key in a hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}