#include "main.h"

void print_number(int n)
{
    unsigned int n1;

    if (n < 0)
    {
        n1 = -n;
        _putchar('-');
    }
    else
    {
        n1 = n;
    }

    if (n1 / 10)
    {
        print_number(n1 / 10);
    }

    _putchar((n1 % 10) + '0');
}



void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
    print_number(*a + i);
    if (i != (n-1)){
        _putchar(',');
        _putchar(' ');
    }
 i++;   
}
_putchar('\n');
}