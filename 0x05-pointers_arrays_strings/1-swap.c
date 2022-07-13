#include"main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: argument 1
 * @b: argument 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

