#include "main.h"

/**
 * _isalpha - Checks if a character is
 * an alphabet, either lower or upper.
 * @c: argument to be checked
 * Return: 1 if the character is either
 * lower or upper.
 * 0 if the character is anything else
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
