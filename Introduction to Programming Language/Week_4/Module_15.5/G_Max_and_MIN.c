#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void fun(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    int i = 0;
    while (n--)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
        i++;
    }
    printf("%d %d", min, max);
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

    fun(arr, n);
    return 0;
}