#include <stdlib.h>

int _strlen(char *str, unsigned int i);
/**
 * string_nconcat - concantenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: pointer newly allocated space in
 * memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len, s1_len, s2_len;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len = 0;
s1_len = _strlen(s1, 0) - 1;
s2_len = _strlen(s2, 0);


if (n >= s2_len)
{
len = s1_len + s2_len;
}
else
{
len = s1_len + n;
}


s = malloc(len *sizeof(*s));
if (s == NULL)
{
return (NULL);
}


for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}

if (n >= s2_len)
{
for (i = 0; s2[i] != '\0'; i++)
{
s[s1_len + i] = s2[i];
}
}
else
{
for (i = 0; i < n ; i++)
{
s[s1_len + i] = s2[i];
}
}
s[s1_len + i] = '\0';

return (s);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * @i: the iterator
 *
 * Return: the length of the string
 */
int _strlen(char *str, unsigned int i)
{
if (str[i] == '\0')
{
return (1);
}
return (1 + _strlen(str, i + 1));
}
