#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int M1, M2, D;
        scanf("%d%d%d", &M1, &M2, &D);
        int ans = 1.0 * (D * M2) / (M1 + M2);
        int rem = (D * M2) % (M1 + M2);
        if (rem > 0)
            printf("%d\n", ans + 1);
        else
            printf("%d\n", ans);
    }
    return 0;
}