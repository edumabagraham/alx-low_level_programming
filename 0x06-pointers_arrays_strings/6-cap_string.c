#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *str)
{
char arr[13] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};

int i, j;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
for (j = 0; j < 13; j++)
{
if (str[i] == arr[j])
{

if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
{
str[i + 1] -= 32;
}
}
}
}

return (str);
}
