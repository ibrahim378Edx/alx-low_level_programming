#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct
 *
 * @d: struct to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

}
}
