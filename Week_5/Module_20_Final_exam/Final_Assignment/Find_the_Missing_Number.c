#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void test()
{
    long long M;
    int A, B, C;
    scanf("%lld %d %d %d", &M, &A, &B, &C);
    long long product = (long long)A * B * C;
    if (product == 0)
    {
        printf("-1\n");
    }
    else if (M == 0)
    {
        printf("0\n");
    }
    else if (M % product == 0)
    {
        printf("%lld\n", M / product);
    }
    else
        printf("-1\n");
}
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        test();
    }
    return 0;
}