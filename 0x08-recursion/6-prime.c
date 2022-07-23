int prime(int n, int i);
/**
 * is_prime_number - determine if a number
 * is prime or not
 *
 * @n: number
 * Return - 0 or 1
 */

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    if (n == 2)
    {
        return (1);
    }

    return (prime(n, 2));
}

/**
 * prime - determines if a number
 * is prime
 *
 * @n: number
 * @i: divider
 *
 * Return - 0 or 1
 */

int prime(int n, int i)
{
    if (n % i == 0)
    {
        return (0);
    }

    if (n == i)
    {
        return (1);
    }
    return (prime(n, i + 1));
}
