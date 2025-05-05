#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);
    //int star = 1;
    int space = 1;
    int star=2*n-1;
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = star; j >=1; j--)
        {
            //   printf("    ");
            printf("*");
        }
        printf("\n");
        for (int x = 1; x <=space; x++)
        {
            printf(" ");
        }
        star -= 2;
        space++;
    }
    return 0;
}