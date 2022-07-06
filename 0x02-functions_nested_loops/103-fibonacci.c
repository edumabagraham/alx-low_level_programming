#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int sum = 0;
int fib = 0;
int previous = 0;
int current = 1;
int i;

for (i = 0; i < 10; i++)
{
fib = previous + current;
if ((fib % 2) == 0)
{
sum += fib;
}
previous = current;
current = fib;
}
printf("%d\n", sum);
return (0);
}
