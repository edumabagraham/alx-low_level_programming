#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int result;
int (*func)(int, int);
char o;


if (argc > 4 || argc < 4)
{
printf("Error\n");
exit(98);
}

func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}

o = *argv[2];
if ((o == '/' || o == '%') && atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}

result = func(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
