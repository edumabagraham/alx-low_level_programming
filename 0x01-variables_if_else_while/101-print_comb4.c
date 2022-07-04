#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;
for (i = '0'; i <= '7'; i++)
{
for (j = '1'; j <= '8'; j++)
{
for (k = '2'; k <= '9'; k++)
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
putchar('\n');
return (0);
}
