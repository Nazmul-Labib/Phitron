#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int res = add(a, b);
    printf("%d", res);
    return 0;
}