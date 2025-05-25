#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);
    int star = 2 * n - 1;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= space; x++)
        {
            printf(" ");
        }
        space++;
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star -=2;
        printf("\n");
    }
    return 0;
}