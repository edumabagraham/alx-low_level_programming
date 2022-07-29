#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
    printf("Value of 'cc': %p\n", cc);
    printf("Address of 'm': %p\n\n", &cc);

    printf("Value of 'ccc': %d\n", ccc);
    printf("Address of 'ccc': %p\n", &ccc);
    *cc = 'o';
    ccc = 'l';
    printf("Value of 'ccc': %d\n", ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    char *p;

    p = &c;
    c = 'H';

    printf("\n\nValue of 'c' before the call: %c\n", c);
    printf("Address of 'c': %p\n", &c);
    printf("Value of 'p':%p\n", p);
    printf("Address of 'p': %p\n", &p);
    modif_my_char_var(p, c);
    printf("Value of 'c' after the call: %c\n", c);

    return (0);
}