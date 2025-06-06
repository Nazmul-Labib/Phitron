#include <stdio.h>
#include <stdlib.h>

int absvalue(int x, int y)
{
    return x > y ? x - y : y - x;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

void test()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxGCD = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = absvalue(arr[i], arr[j]);

            for (int d = 1; d * d <= diff; d++)
            {
                if (diff % d == 0)
                {
                    int d1 = d;
                    int d2 = diff / d;

                    // Check for d1
                    int count[1000] = {0};
                    for (int k = 0; k < n; k++)
                    {
                        count[arr[k] % d1]++;
                    }
                    for (int k = 0; k < 1000; k++)
                    {
                        if (count[k] >= 2)
                        {
                            maxGCD = max(maxGCD, d1);
                            break;
                        }
                    }

                  //  Check for d2 if different
                    if (d1 != d2)
                    {
                        int count2[1000] = {0};
                        for (int k = 0; k < n; k++)
                        {
                            count2[arr[k] % d2]++;
                        }
                        for (int k = 0; k < 1000; k++)
                        {
                            if (count2[k] >= 2)
                            {
                                maxGCD = max(maxGCD, d2);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", maxGCD);
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
