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
    signed int last = n % 10;
    if (last > 5)
    {
        printf("Last digit of %i is %i and is greater than 5", n, last);
    }
    else if (last == 0)
    {
        printf("Last digit of %i is %i and is 0", n, last);
    }
    else
    {
        printf("Last digit of %i is %i and is less than 6 and not 0", n, last);
    }
    return (0);
}