#include <stdarg.h>
#include <stdio.h>

void printargs(int arg1,...)
{
    va_list ap;
    int i, j;

    va_start(ap, arg1);

    for (i = 0; i < arg1; i++)
    {
        j = va_arg(ap,int);
        printf("%d\n",j);
    }
    va_end(ap);
}

int main(void)
{
printargs(3,3,4,5);
return (0);
}