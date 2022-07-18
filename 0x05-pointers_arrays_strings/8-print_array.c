#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints elements in an array
 * in particular format
 *
 * @a: Array
 * @n: number of elements in the array
 *
 * Return - nothing
 */

void print_array(int *a, int n)
{
int i, j = 0;
int *p;
p = a;

while (j < n)
{
j++;
}

if (n == j)
{
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", *p);
}
else
{
printf("%d", *p);
}
_putchar('\n');
p++;
}
}
}

