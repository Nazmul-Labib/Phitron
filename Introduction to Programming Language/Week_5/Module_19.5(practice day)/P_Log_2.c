#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void result(long long n, int count)
{
    n = n / 2;
    if (n == 0)
    {
        printf("%d", count);
        return;
    }

    count++;
    result(n, count);
}

int main()
{

    long long n;
    scanf("%lld", &n);
    result(n, 0);
    return 0;
}