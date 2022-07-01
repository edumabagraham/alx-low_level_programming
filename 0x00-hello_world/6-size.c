#!/bin/bash
#include <stdio.h>

/**
 *main -Print the size of every type
 *on the computer it is run on.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(S)",sizeof (char));
	printf("Size of an int: %d byte(S)",sizeof (int));
	printf("Size of a long int: %d byte(S)",sizeof (long int));
	printf("Size of a long long int: %d byte(S)",sizeof (long long int));
       	printf("Size of a float: %d byte(S)",sizeof (float));
        return (0);
}
