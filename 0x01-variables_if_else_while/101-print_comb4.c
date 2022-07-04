#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
for (int i = '0'; i <= '7'; i++)
{
for (int j = '1'; j <= '8'; j++)
{
for (int k = '2'; k <= '9'; k++)
{
if (k > i && k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);

if (i != '7' || j != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
}

}
}
}
putchar(' ');
return (0);
}
