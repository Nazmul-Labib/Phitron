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
    int i = 0, j = n - 1, f = 0;
    // printf("%d %d", arr[0], arr[4]);

    while (i < j)
    {

        if (arr[i] != arr[j])

        {
            f = 1;
            // printf("Laabb");
            break;
        }
        // printf("%d  \t %d\n",arr[i],arr[j]);

        i++;
        j--;
    }
    // printf("%d",f);
    if (f == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}