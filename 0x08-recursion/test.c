#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * with recursion
 *
 * @s: argument
 * Return - nothing
 */

int add(int n)
{
    if (n < 20)
    {
    ++n;
    return (add(n));
    }
    
}

int main(void)
{
    int value;
    value = add(10);
    printf("%d\n",value);
    return (0);
}