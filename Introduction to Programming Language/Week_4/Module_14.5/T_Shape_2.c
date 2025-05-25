#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);
    //int star = 2 * n - 1;
    int space = n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = space; x > 1; x--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }

    return 0;
}