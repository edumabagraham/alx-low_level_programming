#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - an array of chars
 * @size: size of array
 * @c: character to be initialized with
 *
 * Return: NULL if size is 0, otherwise pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{

arr = malloc(sizeof(char) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
*(arr + i) = c;
}

return (arr);
}

