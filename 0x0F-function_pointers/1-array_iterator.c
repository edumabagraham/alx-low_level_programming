/**
 * array_iterator - executes function as
 * a parameter
 *
 * @array: array to be iterated
 * @size: size of array
 * @action: function pointer
 *
 */
void array_iterator(int *array, int size, void (*action)(int))
{
int i;
if (!array || !size || !action)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
