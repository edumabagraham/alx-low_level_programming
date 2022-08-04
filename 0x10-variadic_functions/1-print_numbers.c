#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers with seperator
 *
 * @seperator: string to be printed between
 * numbers
 * @n: number of integers passed to the
 * function
 *
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
va_list(args);
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
int v = va_arg(args, int);
if (i == n - 1)
printf("%d\n", v);

else
{
if (seperator == NULL)
{
printf("%d", v);
}

else
{
printf("%d%s", v, seperator);
}

}
}
}
