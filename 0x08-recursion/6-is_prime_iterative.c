/**
 * is_prime_number - determine if a number
 * is prime or not
 *
 * @n: number
 * Return - 0 or 1
 */

int is_prime_number(int n)
{
int i, value;
for (i = 2; i < n; i++)
{
if (n % i == 0)
{
value = 0;
break;
}
else
{
value = 1;
}
}
return (value);
}
