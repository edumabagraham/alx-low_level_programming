#include "main.h"

/**
 * print_alphabet - Prints all the
 * alphabets.
 *
 * Return nothing
 */

void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
