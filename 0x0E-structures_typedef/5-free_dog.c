#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: pointer of type struct
 * with typedef of dog_t
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
free(d);
}
