#include <stdio.h>

int main()
{
int arr[5] = {1,2,3,4,5};
int arr2[5];
int j;
int i = 0;

for (j = 4; j >= 0; j--)
{
arr2[i] = arr[j];
printf("%d, ",*(arr2 + i));
i++;
}



return (0);
}