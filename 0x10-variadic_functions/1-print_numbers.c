#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers with separator
 *
 * @separator: string to be printed between
 * numbers
 * @n: number of integers passed to the
 * function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
if (separator == NULL)
{
printf("%d", v);
}

else
{
printf("%d%s", v, separator);
}
}
}
va_end(args);
}

