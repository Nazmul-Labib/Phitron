#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
long long int prt(long long int arr[], int n, int i)
{
    if(i==n) return 0;
    return arr[i]+prt(arr,n,i+1);

}
int main()
{

    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int S=prt(arr, n, 0);
    printf("%lld",S);
    return 0;
}