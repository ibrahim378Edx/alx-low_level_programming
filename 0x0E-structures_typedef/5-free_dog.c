#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - freeing struct of dog
 *
 * @d: variable to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
