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
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
