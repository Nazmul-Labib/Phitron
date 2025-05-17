#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
bool is_lucky(int n)
{
    while (n > 0)
    {
        int d=n%10;
        if (d !=7 && d!=4)
            return false;
        n = n / 10;
    }
    return true;
}
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (is_lucky(i) && n % i == 0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}