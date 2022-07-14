#include "main.h"

/**
 * string_toupper - Converts a string to upper
 * case
 * @*str pointer to first value of string
 * @str: first argument
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
return (str);
}
