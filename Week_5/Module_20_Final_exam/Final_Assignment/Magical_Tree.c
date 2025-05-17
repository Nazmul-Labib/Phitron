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
    int row = (n / 2) + 6;
    int space = row;
    for (int i = 1; i <= row; i++)
    {
        for (int i = 1; i <space; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        space--;
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int m=1;m<=n;m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}