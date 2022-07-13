#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @*s: Points to the starting address
 * of the string.
 * @s: name of the string
 * Return: Nothing
 */

void rev_string(char *s)
{
int i = 0, j;
char temp;

while (s[i] != '\0')
{
i++;
}

j = 0;
i--;
while (i > j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j++;
i--;
}
}

