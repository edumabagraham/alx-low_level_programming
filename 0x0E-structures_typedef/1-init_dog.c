#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type
 * dog
 *
 * @d: point struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
