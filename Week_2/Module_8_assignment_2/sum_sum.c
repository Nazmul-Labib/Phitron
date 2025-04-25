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
    int sumpos = 0, sumneg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            sumpos = sumpos + arr[i];
        else
            sumneg = sumneg + arr[i];
    }
    printf("%d %d", sumpos, sumneg);
    return 0;
}