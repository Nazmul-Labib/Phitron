#include <stdio.h>
void test()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = 0;
    if (y > x)
    {
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum = i + sum;
            }
        }
    }
    else
    {
        for (int i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
            {
                sum = i + sum;
            }
        }
    }
    printf("%d\n", sum);
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