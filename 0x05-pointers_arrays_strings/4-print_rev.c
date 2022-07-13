#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print the reverse of a string
 * @s: string argument
 * Return: nothing
 */

void print_rev(char *s)
{
int i = 0, j;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
