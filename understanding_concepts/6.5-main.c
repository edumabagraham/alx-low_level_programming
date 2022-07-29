#include <stdio.h>

void modify_my_param(int m)
{
    m = 402;
}

int main(void)
{
    int n;
    n = 98;
    printf("Value of n\n");
    printf("Before modify_my_param: %d\n",n);
    modify_my_param(n);
    printf("After modify_my_param: %d\n",n);

    return (0);
}