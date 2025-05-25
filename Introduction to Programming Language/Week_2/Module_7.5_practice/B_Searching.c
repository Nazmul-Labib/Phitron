#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int n, f = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int scf;
    scanf("%d", &scf);
    for (int i = 0; i < n; i++)
    {
        if (scf == arr[i])
        {
            printf("%d", i);
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("-1");
    return 0;
}