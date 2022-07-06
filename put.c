#include <stdio.h>

int main(void)
{
int j = 111;

int k = ((j/10));

putchar((k/10) + '0');
putchar((j%10) + '0');
return (0);
}