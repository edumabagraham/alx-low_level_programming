#include <stdio.h>

/**
 * main - Entry point
 * This function prints all arguments it receives
 * @argc: number of argument passed to the program
 * @argv: one dimensional array of strings passed
 * as arguments to the program
 *
 * Return: 0 on success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}


