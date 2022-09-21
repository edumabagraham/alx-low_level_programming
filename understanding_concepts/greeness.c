#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int *array;
    // array = malloc(sizeof(char) * len);

    // int n, i;
    // scanf("%d", &n);

    // if (n >= 2 && n <= 100000)
    // {
    //     int array[n];
    //     for (i = 0; i < n; i++)
    //     {
    //         int grass;
    //         scanf("%d", &grass);
    //         array[i] = grass;
    //     }
    //     printf("------------\n");
    //     for (i = n - 1; i >= 0; i--)
    //     {
    //         printf("%d\n", array[i]);
            
    //     }
    // }

    int n, i, j;
    scanf("%d", &n);

    if (n >= 2 && n <= 100000)
    {
        int array[n];
        for (i = 0; i < n; i++)
        {
            int grass;
            scanf("%d", &grass);
            array[i] = grass;
        }
        printf("------------\n");
        for (i = 0; i < n; i++)
        {
            int green = array[i];
            int greener;
            for ( j = 0; j < n; j++)
            {
                if (array[j] > green)
                {
                    greener = array[j];
                }  
            }
            printf("%d\n", greener);
        }
    }

    return (0);
}