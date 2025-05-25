#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    int arr1[5];
    int arr2[3];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[8], j = 0;
    for (int i = 0; i < 8; i++)
    {
        if (i >= 5)
        {
            arr3[i] = arr2[j++];
        }
        else
        {
            arr3[i] = arr1[i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", arr3[i]);
    }
    return 0;
}