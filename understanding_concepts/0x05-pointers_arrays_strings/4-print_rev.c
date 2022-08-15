#include "main.h"


int str_len(char *s){

if (*s == '\0')
return (0);

return (1 + str_len(s + 1));
}

void print_rev(char *s)
{
int j = str_len(s);

while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}