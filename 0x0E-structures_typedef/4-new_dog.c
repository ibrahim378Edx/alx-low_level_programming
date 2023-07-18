#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - making new variable
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner
 *
 * Return: a struct of new varible
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *q = malloc(sizeof(dog_t));
if (q == NULL)
{
return (NULL);
}
q->owner = malloc(sizeof(char) * (strlen(owner) + 1));
q->name = malloc(sizeof(char) * (strlen(name) + 1));
if (q->owner == NULL || q->name == NULL)
{
return (NULL);
}
q->age = age;
strcpy(q->name, name);
strcpy(q->owner, owner);
return (q);
}
