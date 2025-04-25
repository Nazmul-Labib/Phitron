#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    char a[101], b[101];
    scanf("%s %s", a, b);
    //printf("%d", strcmp(a, b));
    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("A comes first");
    }
    else if (val > 0)
    {
        printf("B comes first");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}