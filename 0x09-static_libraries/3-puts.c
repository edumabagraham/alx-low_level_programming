#include "main.h"
/**
 * _puts - prints out a string
 *
 * @str: pointer to char variable
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
