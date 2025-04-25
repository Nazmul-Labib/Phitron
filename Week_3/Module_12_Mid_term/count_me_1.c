#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int div2 = 0, div3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 2 == 0)
        {
            div2++;
        }
        else if (arr[i] % 2 == 0)
        {
            div2++;
        }
        else if (arr[i] % 3 == 0)
        {
            div3++;
        }
    }
    printf("%d %d",div2,div3);
    return 0;
}