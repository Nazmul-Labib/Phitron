#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void prt1(long long int arr[], long long int left, long long int right)
{
    if (left > right)
        return;
    printf("%lld ", arr[left]);
    left++;
    if (right >= left)
        printf("%lld ", arr[right]);
    right--;
    prt1(arr, left, right);
}

int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    prt1(arr, 0, n - 1);

    return 0;
}