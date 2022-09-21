#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[10];
    int n;
    char c;
    int i;

    scanf("%s %d %c", s, &n, &c);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == (n - 1))
        {
            s[i] = c;
        }
    }
    printf("%s", s);

    return (0);
}