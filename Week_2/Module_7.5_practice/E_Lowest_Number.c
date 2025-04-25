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
    int min = arr[0];
    int pos=1;
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            pos=i+1;
        }
    }
   
    printf("%d %d",min,pos);
    return 0;
}