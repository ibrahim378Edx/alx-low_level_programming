#ifndef DOG_H
#define DOG_H

/**
 * struct dog - saves dogs info
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 *
 * Description: a struct that saves dog's info
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - changing struct name
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
