#include <stdio.h>
#include <stdlib.h>

int main() 
{
int i,n;
printf("Please enter the numbers of integers.");
scanf("%d", &n);

int *mem = (int*)malloc(n*sizeof(int));

if (mem == NULL || n < 0)
{
printf("Memory not available");
exit(1);
}

for (i = 0; i < n; i++)
{
printf("Enter a number ");
scanf("%d", (mem + i));
}
for (i = 0; i < n; i++)
{
printf("%d ",*(mem + i));
}

return (0);
}