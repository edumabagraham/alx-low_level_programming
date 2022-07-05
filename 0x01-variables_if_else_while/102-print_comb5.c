#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
int j = '0';
while (j <= '9')
{
int k = '0';
while (k <= '8')
{
int l = '0';
while (l <= '9')
{
if (k != '0' || l != '0')
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i != '9' || j != '8' || k != '9' || l != '9')
{
putchar(',');
putchar(' ');
}
}
l++;
}
k++;
}
j++;
}
i++;
}


putchar('\n');
return (0);
}
