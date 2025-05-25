#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int t = 1;
    while (t <= n)
    {
        if (n % t == 0)
            printf("%d\n", t);
        t++;
    }
    return 0;
}