#include <stdio.h>

/**
 * main - Entry point
 * This function prints the number of arguments
 * passed to it.
 * @argc: number of argument passed to the program
 * @argv: one dimensional array of strings passed
 * as arguments to the program
 *
 * Return: 0 on success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", (argc - 1));
return (0);
}
