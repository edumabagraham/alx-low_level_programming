#include "main.h"

/**
 * print_last_digit - Return the last digit
 * of a number
 *
 * @n: argument
 * Return: Last digit
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;

_putchar('0' + (n % 10));
_putchar('\n');
return (n % 10);
}

