#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers to 98
 *
 * @n: argument
 *
 * Return: nicht
 */

void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

else
{
for (n = n; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}
