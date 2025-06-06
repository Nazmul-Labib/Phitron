#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    while (n--)
    {
        int k;
        scanf("%d", &k);
        if (k % 2 == 0)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}