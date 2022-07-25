#include <stdio.h>

int main(int argc, char *agrv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", agrv[i]);
}
return (0);
}