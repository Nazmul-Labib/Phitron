#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void test()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] - (i) + (j) < min)
            {
                min = arr[i] + arr[j] - (i) + (j);
            }
        }
    }
    printf("%d\n", min);
}
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        test();
    }

    return 0;
}