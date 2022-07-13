#include "main.h"

/**
 * puts2 - prints every other character
 * of a string with the first character,
 * followed by a new line.
 * 
 * @str: argument name
 * 
 * Return - nothing
 */

void puts2(char *str)
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
        j-2;
    }
    _putchar('\n');
}