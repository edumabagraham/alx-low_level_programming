#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to
 * the allocated memory
 * @b: argument
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
char *c = malloc(b);
if (c == NULL)
{
exit(98);
}
return (c);
}
