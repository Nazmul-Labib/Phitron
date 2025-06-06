#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int result = a > b ? a - b : b - a;
    printf("%d", result);
    int max = a > b ? a : b;
    printf("\n%d",max);
    return 0;
}