int natural_square(int n, int i);
/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: argument
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
return (natural_square(n, 0));
}

/**
 * natural_square - finds the
 * natural square
 *
 * @n: number
 * @i: guess
 * Return: an integer
 */
int natural_square(int n, int i)
{
if (n == i * i)
{
return (i);
}
if (n < i * i)
{
return (-1);
}
return (natural_square(n, i + 1));
}
