#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - 
 * 
 * Return
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    int last = n %10;
    if (last > 5)
    {
        printf("Last digit of %d and is greater than 5");
    }
    else if (last == 0)
    {
        printf("Last digit of %d and is 0");
    }
    else
    {
        printf("Last digit of n, and is less than 6 and not 0\n")
    }
    return (0);
}