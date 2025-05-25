#include <stdio.h>
#include <limits.h>
int main()
{

    int n, max = INT_MIN;
    scanf("%d", &n);
    while (n--)
    {
        int j;
        scanf("%d", &j);
        if (j > max)
            max = j;
    }
    printf("%d", max);
    return 0;
}