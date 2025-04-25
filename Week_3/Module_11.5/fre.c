#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int M, N;
    scanf("%d%d", &M, &N);
    int arr1[M];
    int arr2[N + 1];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < N + 1; i++)
    {
        arr2[i] = 0;
    }

    for (int i = 0; i < M; i++)
    {
    //    arr2[arr1[i]]++;
    int val=arr1[i];
    arr2[val]++;
    }
    for (int i = 1; i < N + 1; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}