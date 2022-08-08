#include <stdio.h>

int main(void)
{
    int arr[] = {10, 5, 15, 12, 90, 80};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, smallest, index, temp,c;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                smallest = arr[j];
                printf("Smallest %d\n", smallest);
                index = j;
                printf("Index %d\n", index);
            }
        }
        // arr[index] = arr[i];
        // arr[i] = smallest;
    }

    for (c = 0; c < length; c++)
    {
        printf("%d ", arr[c]);
    }

    return (0);
}