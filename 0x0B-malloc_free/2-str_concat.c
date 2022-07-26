#include <stdio.h>
#include <stdlib.h>

int concat(char *dest, char *src, int start, int stop, int i);
int _strlen(char *str, unsigned int i);
/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, len;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1, 0) - 1;
len2 = _strlen(s2, 0);
len = len1 + len2;

s = malloc(sizeof(char) * len);

if (s == NULL)
return (NULL);
concat(s, s1, 0, len1, 0);
concat(s, s2, len1, len, 0);

return (s);
}

/**
 * concat - copies a string to a new string
 * @dest: the destination
 * @src: the source string
 * @start: the starting index of the destination
 * @stop: the ending index of the destination
 * @i: the iterator
 *
 * Return: the new string
 */
int concat(char *dest, char *src, int start, int stop, int i)
{
if (start == stop)
return (1);
*(dest + start) = *(src + i);
return (1 * concat(dest, src, start + 1, stop, i + 1));
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
return (1);
return (1 + _strlen(str, i + 1));
}

