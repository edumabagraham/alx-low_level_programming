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
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

