#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
int a, b, c;
int biggest;

a = 8;
b = 98;
c = 98;

biggest = largest_number(a, b, c);

printf("%d is the largest number\n", biggest);

return (0);
}
