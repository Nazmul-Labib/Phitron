#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int x = space; x >= 1; x--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            //   printf("    ");
            printf("* ");
        }
        printf("\n");
        star += 1;
        space--;
    }
    return 0;
}