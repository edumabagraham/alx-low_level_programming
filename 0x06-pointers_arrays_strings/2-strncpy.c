#include "main.h"

/**
 * _strncpy - Concantenates two strings
 * @*dest pointer to first value of string
 * @*src pointer to first value of string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
/**Length of dest*/
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
