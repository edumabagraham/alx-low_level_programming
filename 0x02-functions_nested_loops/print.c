#include "main.h"

/**
 * print - Print numbers with putchar
 *
 * @n: argument
 *
 * Return: nicht
 */
void print(long n)
{
/*
* If number is smaller than 0, put a - sign
* and change number to positive
*/
if (n < 0)
{
_putchar('-');
n = -n;
}

/*
* Remove the last digit and recur
*/
if (n / 10)
print(n / 10);

/*
* Print the last digit
*/
_putchar(n % 10 + '0');
}

