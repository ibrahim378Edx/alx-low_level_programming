#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  *
  * @size: size of arr
  *
  * Return: A pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *htp = NULL;
hash_node_t **arr = NULL;
htp = malloc(sizeof(hash_table_t));
if (htp == NULL)
{
return (NULL);
}
arr = malloc(sizeof(hash_node_t *) * size);
if (arr == NULL)
{
return (NULL);
}
for (; i < size; ++i)
{
arr[i] = NULL;
}
htp->size = size;
htp->array = arr;
return (htp);
}
