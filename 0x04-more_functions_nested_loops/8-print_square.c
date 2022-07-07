#include "main.h"

/**
 * print_square - Print straight line
 * @n: argument
 * Return: Nothing
 */

void print_square(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}


