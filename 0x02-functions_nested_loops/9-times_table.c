#include "main.h"


/**
 * times_table - Prints the 9 times
 * table
 *
 * Return: Nothing
 */

void times_table(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 9)
{
int product = (i * j);

if (product == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
j++;
}
_putchar('\n');
i++;
}
}


