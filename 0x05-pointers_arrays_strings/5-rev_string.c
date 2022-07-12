#include "main.h"

/**
 * rev_string - prints a string in revers, followed by a new line, to stdout.
 * @*s: the first character of the string
 * @s: address of the first character of the string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i - 1;

	i = 0;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
