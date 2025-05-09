#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void change_it(int arr[], int n)
{
    arr[n - 1] = 100;
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    change_it(arr, n);
    int i = 0;
    while (n--)
    {
        printf("%d ", *(arr + i));
        i++;
    }
    return 0;
}