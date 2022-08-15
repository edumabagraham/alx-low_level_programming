#include "main.h"

int str_len(char *s)
{

    if (*s == '\0')
        return (0);

    return (1 + str_len(s + 1));
}

void puts_half(char *str)
{
    int len = str_len(str);
    int n;

    n = (len - 1) % 2 == 0 ? (len - 1) / 2 : ((len - 1) / 2) + 1;

    while (n < len)
    {
        _putchar(str[n]);
        n++;
    }
    _putchar('\n');
    
}