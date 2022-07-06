#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int sum = 0;
long int fib = 0;
long int previous = 0;
long int current = 1;
int i;

for (i = 0; i < 34; i++)
{
fib = previous + current;
if ((fib % 2) == 0)
{
sum += fib;
}
previous = current;
current = fib;
}
printf("%ld\n", sum);
return (0);
}
