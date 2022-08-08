#include <stdio.h>


/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

int is_strictly_positive(int elem)
{
    return (elem > 0);
}

int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

int main()
{

    printf("%d\n", is_98(98));
    printf("%d\n",is_strictly_positive(98));
    printf("%d\n",abs_is_98(98));
    return (0);
}