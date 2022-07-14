#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Concantenates two strings
 * @*s1 pointer to first value of string
 * @*s2 pointer to first value of string
 * @s1: first argument
 * @s2: second argument
 *
 * Return: pointer to resulting string dest
 */

int _strcmp(char *s1, char *s2)
{

/**Value of s1*/
int value = 0, i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
if (s1[i] == s2[i])
{
value = 0;
}

else if (s1[i] < s2[i])
{
value = -15;
}

else
{
value = 15;
}
}
return (value);
}




