#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int arr1[3], arr2[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    // int i = 0, n = 3;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1, temp; j < 3; j++)
        {
            if (arr1[i] > arr1[j])
            {
                temp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr1[i]);
        if (i == 2)
        {
            printf("\n");
            for (int j = 0; j < 3; j++)
            {
                printf("%d\n", arr2[j]);
            }
        }
    }
    return 0;
}