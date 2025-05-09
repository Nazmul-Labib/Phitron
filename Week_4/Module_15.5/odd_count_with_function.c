#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int count_odd(int arr[], int n, int *count)
{
    // int x=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            (*count)++;
    }
    // *count = x;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    count_odd(arr, n, &count);
    printf("%d", count);

    return 0;
}