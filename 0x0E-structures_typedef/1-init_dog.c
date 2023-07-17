#include "dog.h"
#include <stdio.h>
/**
 *  init_dog - function that initialize struct variable
 *
 *  @d: pointer to the variable
 *
 *  @name: dog name
 *
 *  @age: dog name
 *
 *  @owner: owner's name
 *
 *  Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
