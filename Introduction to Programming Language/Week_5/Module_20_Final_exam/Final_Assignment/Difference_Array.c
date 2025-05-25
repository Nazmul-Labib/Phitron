#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void test()
{
    int n;
    scanf("%d", &n);
    int A[n], B[n], C[n];
    // int B[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        B[i] = A[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (B[i] > B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // int i = 0;
    // while (n--)
    // {
    //     printf("%d ", B[i++]);
    // }

    // return 0;
    for (int i = 0; i < n; i++)
    {
        C[i] = abs(A[i] - B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
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