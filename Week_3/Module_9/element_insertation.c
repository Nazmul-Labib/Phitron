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
    printf("Enter how many elements you want to add:\n");
    int z;
    scanf("%d", &z);
    arr[n+z];
    //printf("%d", arr[n]);
    printf("Enter the position and value:\n");
    int idx, value;
    scanf("%d %d", &idx, &value);
    for (int i = n+z-1; i > idx; i--)
    {
        arr[i]=arr[i-1];

    }
    arr[idx]=value;
    for(int i=0;i<n+z;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}