#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    int last = n % 10;
    if (last > 5)
    {
    printf("Last digit of %d and is greater than 5", n);
    }
    else if (last == 0)
    {
    printf("Last digit of %d and is 0", n);
    }
    else
    {
    printf("Last digit of %d, and is less than 6 and not 0", n)
    }
    return (0);
}