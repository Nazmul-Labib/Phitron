#include <stdio.h>
int main()
{

    int n,odd=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            odd++;
    }
    printf("%d",odd);
    return 0;
}