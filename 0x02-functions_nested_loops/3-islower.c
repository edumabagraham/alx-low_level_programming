#include "main.h"

/**
 * _islower - Checks if a character
 * is in lower case
 *
 * @c: first argument
 * Return: 1 if character is lowercase
 * 0 if character is not lowercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
