#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("-1");
    else
    {
        int i = 2;
        for (;;)
        {
            if (i > n)
                break;
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }

            i += 2;
        }
    }

    return 0;
}