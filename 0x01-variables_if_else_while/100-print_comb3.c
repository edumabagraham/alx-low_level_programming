#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = '0';
int second = '1';

while (first <= '8')
{
while (second <= '9')
{
putchar(first);
putchar(second);
if (first != '8' || second != '9')
{
putchar(',');
putchar(' ');
}
second++;
}
first++;
}
putchar('\n');
return (0);
}
