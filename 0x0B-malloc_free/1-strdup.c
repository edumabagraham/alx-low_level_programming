#include <stdio.h>
#include <stdlib.h>

int _dupfill(char *src, char *dest, unsigned int size, unsigned int i);
unsigned int _strlen(char *str, unsigned int i);
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicate of the string
 */
char *_strdup(char *str)
{
unsigned int length;
char *dupstr;

if (str == NULL)
return (NULL);

length = _strlen(str, 0);

dupstr = malloc(sizeof(char) * length);

if (dupstr == NULL)
return (NULL);

_dupfill(str, dupstr, length, 0);
return (dupstr);
}

/**
 * _dupfill - duplicates a string
 * @src: the string to be copied
 * @dest: the duplicated string
 * @size: the length of the string
 * @i: the iterator
 *
 * Return: the duplicated string
 */
int _dupfill(char *src, char *dest, unsigned int size, unsigned int i)
{
if (i == size)
return (1);
*(dest + i) = *(src + i);
return (1 * _dupfill(src, dest, size, i + 1));
}

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * @i: the iterator
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *str, unsigned int i)
{
if (str[i] == '\0')
return (1);
return (1 + _strlen(str, i + 1));
}

