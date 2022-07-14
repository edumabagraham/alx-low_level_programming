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

/**Value of s1*/
int s1_val = 0, s2_val = 0, i = 0, j = 0;
while (s1[i] != '\0')
{
s1_val += s1[i];
i++;
}

/**Value of s2*/
while (s2[j] != '\0')
{
s2_val += s2[j];
j++;
}

if (s1_val == s2_val)
{
return (0);
}

else if (s1_val < s2_val)
{
return (-15);
}

else
{
return (15);
}
}



