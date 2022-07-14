#include "main.h"

/**
 * leet - encode the string
 * @str: string argument
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
char *alpha = "aAeEoOtTlL";
char *num = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = num[j];
}
}
}
return (str);
}
