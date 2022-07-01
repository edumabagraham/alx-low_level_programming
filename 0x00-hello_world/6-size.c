nclude <stdio.h>

/**
 *main -Print the size of every type
 *on the computer it is run on.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
       	printf("Size of an int: %lu byte(s)\n", sizeof(i));
       	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
       	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
       	printf("Size of a float: %lu byte(s)\n", sizeof());
       	return (0);
}
