#include <stdio.h>

void fun(int n)
{
printf("%d\n",n);
}

/**
 * function pointers can be used in place of
 * switch cases.
 */

void add(int a, int b)
{
printf("%d + %d = %d", a, b, a + b);
}

void subtract(int a, int b)
{
printf("%d - %d = %d", a, b, a - b);
}

void multiply(int a, int b)
{
printf("%d x %d = %d", a, b, a * b);}

int main(void)
{    
    fun(10);
    void (*fun_ptr)(int) = &fun;
    (*fun_ptr)(10);

    void (*operation_ptr_array[])(int, int) =  {add, subtract, multiply};
    int option, a = 15, b = 10;
    printf("Select from 0 to 2: ");
    scanf("%d", &option);
    if (option > 2)
    {
       printf("Invalid option");
       return (0);
    }
    (*operation_ptr_array[option])(a, b);
    return (0);
}