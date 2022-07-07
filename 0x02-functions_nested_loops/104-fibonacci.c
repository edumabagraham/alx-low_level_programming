#include <stdio.h>

/**
 * main - Entry point
 * Print the first 50 fibonacci
 * numbers starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long long int previous = 1;
unsigned long long int current = 2;
int i;
unsigned long long int fib = 0;
printf("%ld, ", previous);
printf("%ld, ", current);

for (i = 3; i <= 98; i++)
{
fib = previous + current;
previous = current;
        current = fib;
        if (i != 98)
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
