/**
 *_memset - Fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: the constant byte
 * @n: first n bytes of the memory area pointed
 * to by s
 *
 * Return: pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}
