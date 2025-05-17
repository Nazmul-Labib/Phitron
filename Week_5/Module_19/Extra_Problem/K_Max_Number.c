#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int MAX = INT_MIN;
int max(int arr[], int n, int i)
{
    if (i == n)
        return MAX;
    if (MAX < arr[i])
        MAX = arr[i];
     max(arr, n, i + 1);
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
    int M = max(arr, n, 0);
    printf("%d", M);
    return 0;
}