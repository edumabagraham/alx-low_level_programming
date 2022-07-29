#include <stdio.h>
int _atoi(char *s);

/**
 * main - Entry point
 * This function prints the addtion of all
 * arguments it receives
 * @argc: number of argument passed to the program
 * @argv: one dimensional array of strings passed
 * as arguments to the program
 *
 * Return: 0 on success
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
/**if (argc > 1)
int i;
{, sum = 0
for (i = 1; i < argc; i++)
{
sum += _atoi(argv[i]);

if (_atoi(argv[1]) < 0 || _atoi(argv[1]) > 9)
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
}
else
{
printf("0");
}*/
int j = 1;
char i = argv[j];
printf("%c", i);

return (0);
}



/**
 * _atoi - converts a string to an
 * integer
 *
 * @s:string argument
 * Return: converted integer
 */

int _atoi(char *s)
{
int i, sign, num, digit, flag;
sign = 0;
num = 0;
flag = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign++;
}

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - 48; /** '0' ascii value**/
if (sign % 2)
{
digit = -digit;
}
num = num * 10 + digit;
flag = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
}

if (flag == 0)
{
return (0);
}
return (num);
}




