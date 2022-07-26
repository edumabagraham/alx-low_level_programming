#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an
 * integer
 *
 * @s:string argument
 * Return: converted integer
 */

int _atoi(char *s)
{
int i, sign = 0, flag = 0, value = 0, digit;


for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign++;
}
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - 48;
if (sign % 2)
{
digit = -digit;
}
value = value * 10 + digit;
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
return (value);
}
