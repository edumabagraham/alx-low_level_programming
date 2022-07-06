#include <stdio.h>


/**
 * main - Entry point
 * Print the first 50 fibonacci
 * numbers starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
long int previous = 1;
long int current = 2;
int i;
long int fib = 0;
printf("%ld, ", previous);
printf("%ld, ", current);

for (i = 3; i <= 50; i++)
{
fib = previous + current;
previous = current;
current = fib;
if (i != 50)
{
printf("%ld, ", fib);
}
else
{
printf("%ld", fib);
}
}
printf("\n");
return (0);
}
