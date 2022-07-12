#include <unistd.h>

/**
 * _putchar - takes a char argument and writes it to the standard output
 * @c: argument to be written to the standard output
 *
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
