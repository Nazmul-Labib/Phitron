#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter number of elements:\n");
    scanf("%d", &n);

    int arr[n];
    int x;

    printf("Enter the target number:\n");
    scanf("%d", &x);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Pairs with sum %d:\n", x);
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
