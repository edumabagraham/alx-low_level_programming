#include "main.h"

/**
 * times_table - Prints the 9 times
 * table
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
if (n > 0 && n < 15)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = (i * j);
if (product < 10 && j != 0)
{
_putchar(' ');
_putchar(product + '0');
}
else if (product >= 10)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else
{
_putchar((product / 10) + '0');
}

if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}    
}
}

