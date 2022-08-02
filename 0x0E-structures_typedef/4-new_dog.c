#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a
 * string.
 * @s: string argument
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * _strcpy - copy a string to another
 * string
 *
 * @dest: copy of string
 * @src: copied string
 * Return: char*
 */

char *_strcpy(char *dest, char *src)
{
int len, i = 0;
len = _strlen(src);
while (i < len)
{
dest[i] = src[i];
dest++;
}
dest[i] = '\0';

return (dest);
}
/**
 * new_dog - a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
newDog = malloc(sizeof(dog_t));

if (newDog == NULL)
{
return (NULL);
}

newDog->name = name;
newDog->owner=owner;
newDog->age = age;

return (newDog);
}
