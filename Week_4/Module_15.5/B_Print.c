#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void fun(int n)
{
    int i = 1;
    for (i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", i);
}
int main()
{

    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}