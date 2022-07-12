#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */

int fibonacci(int c)
{
long int previous = 1;
long int current = 2;
int i;
long int fib = 0;
printf("%ld, ", previous);
printf("%ld, ", current);

for (i = 3; i <= c; i++)
{
fib = previous + current;
previous = current;
current = fib;
if (i != c)
{
fibonacci(c);
printf("%ld, ", fib);
}

printf("%ld", fib);

}
printf("\n");
return (0);
}





int main(void)
{

fibonacci(98);
return (0);
}