#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void my_abs(int *n)
{
    *n = abs(*n);
}
int main()
{

    int n;
    scanf("%d", &n);
    my_abs(&n);
    printf("%d", n);
    return 0;
}