#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char number = '0';

while (number <= '9')
{
printf("%d", (number - 48));
number++;
}
printf("\n");
return (0);
}

