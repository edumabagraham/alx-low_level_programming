#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: the converted string
 */
int _atoi(char *s)
{
	int i, num,sign, digit, flag;
	i = 0;
	sign = 0;
	num = 0;
	flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;

			num = num * 10 + digit;
			flag = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	if (flag == 0)
		return (0);
	return (num);
}
