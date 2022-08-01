#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - name of struct
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
