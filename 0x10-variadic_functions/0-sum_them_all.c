#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 * of the function.
 *
 * @n: first argument
 *
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list(args);

va_start(args, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);
return (sum);
}