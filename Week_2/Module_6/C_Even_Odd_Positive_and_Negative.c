#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int j;
        scanf("%d", &j);
        if (j % 2 == 0)
            even++;
        else
            odd++;
        if (j > 0)
            pos++;
        else if (j < 0)
            neg++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    return 0;
}