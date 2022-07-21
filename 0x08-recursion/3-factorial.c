/**
 * factorial - returns the factorial
 * of a number
 * @n: argument
 * Return: Integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
}
