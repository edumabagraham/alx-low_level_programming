#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
int i,j;
int value;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
{
value = j;
printf("%c\n\n",accept[i]);
break;
}
}
}
return (value);
}