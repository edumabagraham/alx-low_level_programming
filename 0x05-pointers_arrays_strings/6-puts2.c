#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 *  first character, followed by a new line.
 *  @str: the string it prints
 *
 *  Return: none
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	j = 0;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
