#include "main.h"

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
if (s1 == s2)
{
return (0);
}

else if (s1 < s2)
{
return (-15);
}

else
{
return (15);
}
}




