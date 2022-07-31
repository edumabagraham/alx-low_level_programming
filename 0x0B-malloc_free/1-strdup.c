#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns the copy of a
 * string in a new memory space.
 *
 * @str: string to be copied
 * Return: pointer to new space
 * in memory
 */

char *_strdup(char *str)
{
char *s;
int str_len;
int i;

while (str[str_len] != '\0')
{
str_len++;
}

s = malloc(str_len *sizeof(*s));

if (str == NULL)
{
return (NULL);
}

else
{
if (s == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
}

return (s);
free(s);
}
