#include <stdio.h>

void leap(int n)
{
if ((n % 4 == 0) && (n % 400 == 0 || n % 100 != 0))
{
        printf("%04d: LEAP\n", n);
}
else
{
printf("%04d: NOT LEAP\n", n);
}
}