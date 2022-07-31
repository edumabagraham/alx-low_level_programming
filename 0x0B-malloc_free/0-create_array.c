#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - returns character arrays
 *
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}

else
{
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}
}


return (arr);
}
