#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //printf("Before deletion:\n");
    for (int i = 0; i < n; i++)
    {
        //printf("%d ", arr[i]);
    }
   // printf("\nEnter the index you want to delete:\n");
    int idx;
    scanf("%d", &idx);
    for (int i = idx; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    //printf("After deletion:\n");
    for (int i = 0; i < n-1 ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}