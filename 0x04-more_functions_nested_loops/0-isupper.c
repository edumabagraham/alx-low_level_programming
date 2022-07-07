#include "main.h"

/**
 * _isupper - Checks if a character is upper
 * @c: argument
 *
 * Return: 1 if upper
 * 0 if lower
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
