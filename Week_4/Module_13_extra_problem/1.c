#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= space; x++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }

    return 0;
}