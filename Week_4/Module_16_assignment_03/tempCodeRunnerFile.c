#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int n;

    int hash = 1;
    scanf("%d", &n);
    int space = n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= space; x++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
                printf("#");
        }
        else
        {
            for (int j = 1; j <= 2 * i - 1; j++)
                printf("-");
        }

        // hash += 2;
        printf("\n");
        space--;
    }
    space = 2;
    int star = 2 * (n - 1) - 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int x = 1; x <= space; x++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 1; j <= star; j++)
                printf("-");
        }
        else
        {
            for (int j = 1; j <= star; j++)
                printf("#");
        }
        star -= 2;
        space++;
        printf("\n");
    }
    return 0;
}