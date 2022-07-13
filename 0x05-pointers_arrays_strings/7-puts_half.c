#include "main.h"

/**
 * puts_half - prints the second half
 * of the string
 *
 * @*str:Pointer to the first character
 * @str:Name of the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
int length = 0, half;
while (str[length] != '\0')
{
length++;
}
half = (length / 2);
if (length % 2 == 0)
{
while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}
}
else
{
half++;
while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}
}
}
