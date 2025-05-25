#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
bool islucky(int n)
{
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 4; i <= n; i++)
    {
        if ((islucky(i)) && n % i == 0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
    return 0;
}