#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void prt(int arr[], int size, int i)
{
    if (i == size)
        return;
    prt(arr, size, i + 1);
    if (i % 2 == 0)
        printf("%d ", arr[i]);
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    int size = n;
    while (n--)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    // printf("---%d---%d",n,arr[3]);
    prt(arr, size, 0);
    return 0;
}