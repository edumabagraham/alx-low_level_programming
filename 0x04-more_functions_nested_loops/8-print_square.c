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
while (n--)
{
_putchar('#');
_putchar('#');
_putchar('\n');
}
_putchar('\n');
}
}

