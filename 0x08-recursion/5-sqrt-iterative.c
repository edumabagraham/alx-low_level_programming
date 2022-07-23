/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: argument
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
    int m, value;
    if (n < 0)
    {
        return (-1);
    }

    for (m = 0; m <= n; m++)
    {
        if (n == m * m)
        {
            value = m;
            break;
        }
        else
        {
            value = -1;
        }
    }
    return (value);
}