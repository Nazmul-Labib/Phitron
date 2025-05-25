#include <stdio.h>

int main()
{
    int n, f = 0;
    scanf("%d", &n);
    int space = n;
    int sp = 2 * n - 3;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= space; j++)
                printf(" ");
        }
        else
        {
            for (int j = 1; j <= space; j++)
                printf(" ");
            f = 1;
        }

        if (f == 0)
        {
            space--;
        }
        else
        {
            space++;
        }

        if (i <= n)
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= 2 * i - 1; j++)
                    printf("#");
            }
            else
            {
                for (int j = 1; j <= 2 * i - 1; j++)
                    printf("-");
            }
        }
        else
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j <= 2 * (2 * n - i) - 1; j++) // FIXED
                    printf("#");
            }
            else
            {
                for (int j = 1; j <= 2 * (2 * n - i) - 1; j++) // FIXED
                    printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}
