/**
 * array_iterator - executes function as
 * a parameter
 *
 * @param array
 * @param size
 * @param action
 * 
 */
void array_iterator(int *array, int size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}