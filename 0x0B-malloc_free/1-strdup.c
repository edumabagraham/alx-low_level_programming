#include <stdio.h>
#include <stdlib.h>


/*int length(char *str, int i)
{
if (str[i] == '\0')
{
return (1);
}
return (1 + length(str, i + 1));
}*/
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
int str_len = 0;
int i;

int l = length(str, 0);
while (str[str_len] != '\0')
{
str_len++;
}
/**printf("%d ohne recursion\n", str_len);
printf("%d mit recursion\n", l);*/

s = malloc(str_len *sizeof(char));

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

for (i = 0; i < str_len; i++)
{
s[i] = str[i];
}
}

return (s);
free(s);
}
