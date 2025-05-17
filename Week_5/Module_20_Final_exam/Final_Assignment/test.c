#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void test()
{
    long long int mul = 1;
    long long int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &arr[i]);
        if (i > 0)
        {
            mul = mul * arr[i];
        }
    }
    if (mul == 0)
        printf("-1\n");
    else if (arr[0] % mul == 0)
    {
        printf("%lld\n", arr[0] / mul);
    }
    else
    {
        printf("-1\n");
    }
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
