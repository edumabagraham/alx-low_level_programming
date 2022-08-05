#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: array to be iterated
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, cmp_value, count = 0;

/*
 * check if all the parameters are
 * have been provided.
 */

if (size <= 0)
{
return (-1);
}

else
{
for (i = 0; i < size; i++)
{
cmp_value = cmp(array[i]);
if (cmp_value != 0)
{
count++;
break;
}
}
}

count != 0 ? (i = i) : (i = -1);

return (i);
}


