#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @*a: the first pointer
 * @a: name of the first pointer
 * @*b: the second integer
 * @b: name of the second pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

