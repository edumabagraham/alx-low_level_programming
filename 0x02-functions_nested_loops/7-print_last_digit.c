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
int i = n % 10;
_putchar(i + '0');
return (i);
}

