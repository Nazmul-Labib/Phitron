#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    printf("Enter:\n");
    // int ch=65;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, ch = 65; j <= i; j++, ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}