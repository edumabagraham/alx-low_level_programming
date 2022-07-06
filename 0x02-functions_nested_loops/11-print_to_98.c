#include "main.h"

/**
 * print_to_98 - Print numbers to 98
 *
 * @n: argument
 *
 * Return: nicht
 */

void print_to_98(int n)
{
if (n <= 0 || n <= 98)
{
while (n <= 98)
{
print(n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
_putchar('\n');
}

else if (n >= 98)
{
while (n >= 98)
{
print(n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
_putchar('\n');
}
}
