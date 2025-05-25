#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
void sum(int a, int b)
{
    int res = a + b;
    printf("%d", res);
}
void sub(int a, int b)
{
    int res = a - b;
    return;
    printf("%d", res);
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    sub(a, b);
    return 0;
}