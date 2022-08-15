#include "main.h"
#include <stdio.h>


int str_len(char *s)
{

    if (*s == '\0')
        return (0);

    return (1 + str_len(s + 1));
}

void rev_string(char *s)
{
int j = str_len(s) - 1;
int i = 0;
char temp;
while (i < j)
{
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    j--;
    i++; 
}
}