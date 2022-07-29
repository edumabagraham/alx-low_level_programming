#include <stdio.h>
int main(void)
{
    int a[5];
    int *p;
    int *p2;

    *a = 98;
    *(a + 1) = 198;
    printf("Value of 'a + 1': %d\n", *(a + 1));
    *(a + 2) = 298;
    a[3] = 398;
    printf("Value of 'a + 3': %d\n", *(a + 3));
    *(a + 4) = 498;
    p = a + 1;
    *p = 98;
    printf("Value of 'a + 1': %d\n", *(a + 1));
    p2 = a + 3;
    *p2 = *p + 1337;
    printf("Value of 'a + 3': %d\n", *(a + 3));

    printf("a: %pn\n", a);
    printf("a + 1: %pn\n", a + 1);
    printf("p: %p\n", p);
    return (0);
}