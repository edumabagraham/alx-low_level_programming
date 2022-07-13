#include "main.h"


/**
 * _strlen - returns the length of a string
 * @*s: pointer to the first character of the string
 * @s: the name of the pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
