#include <stdio.h>
int _atoi(char *s);
/**
 * main - Entry point
 * This function prints the multiplication of it's two
 * arguments it receives
 * @argc: number of argument passed to the program
 * @argv: one dimensional array of strings passed
 * as arguments to the program
 *
 * Return: 0 on success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
if (argc > 1)
{
i = argv[1] * argv[2];
printf("%d\n", i);
}
else
{
printf("Error");
return (1);
}
return (0);
}


/**
 * atoi - converts a string to an
 * integer
 *
 * @s:string argument
 * Return: converted integer
 */

int _atoi(char *s)
{

}




