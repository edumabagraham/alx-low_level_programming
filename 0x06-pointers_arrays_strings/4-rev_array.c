#include "main.h"

/**
 * reverse_array - Reverse the content of
 * an array.
 *
 * @a: array of integers
 * @n: length of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0, tmp;
n--;
while (i < n)
{
tmp = a[n];
a[n] = a[i];
a[i] = tmp;
i++;
n--;
}
}
