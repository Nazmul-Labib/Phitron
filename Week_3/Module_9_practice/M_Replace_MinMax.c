#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int max = -100000, min = 100000, min_idx, max_idx;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
            min_idx = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            max_idx = i;
        }
    }
   // int min = arr[0], max = arr[0], min_idx, max_idx;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //         min_idx = i;
    //     }
    //     else if (arr[i] > max)
    //     {
    //         max = arr[i];
    //         max_idx = i;
    //     }
    // }
    arr[min_idx] = max;
    arr[max_idx] = min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}