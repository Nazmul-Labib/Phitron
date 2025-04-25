#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // abs(sum);
    printf("%lld", llabs(sum));

    return 0;
}