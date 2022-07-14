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
/**Length of s1*/
int s1_len = 0, s2_len = 0;
while (s1[s1_len] != '\0')
{
s1_len++;
}
s1_len++; /*adds 1 for the null terminator*/

/**Length of s2*/
while (s2[s2_len] != '\0')
{
s2_len++;
}
s2_len++; /*adds 1 for the null terminator*/

if (s1_len == s2_len)
{
return (0);
}

else if (s1_len < s2_len)
{
return (-15);
}
else
{
return (15);
}
}


