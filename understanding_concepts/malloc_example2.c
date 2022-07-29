#include <stdio.h>
#include <stdlib.h>

int main() 
{
int *tab;
tab = malloc(sizeof(*tab) * 3);
*(tab) = 98;
*(tab + 1) = -1024;
*(tab + 2) = 402;
printf("%d", tab);
return (0);
}