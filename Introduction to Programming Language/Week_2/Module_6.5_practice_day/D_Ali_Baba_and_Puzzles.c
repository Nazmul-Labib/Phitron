#include <stdio.h>
int main()
{

    long long int a, b, c, d;
    int f = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    if (a + b - c == d)
        f = 1;
    else if (a - b + c == d)
        f = 1;
    else if (a + b * c == d)
        f = 1;
    else if (a * b + c == d)
        f = 1;
    else if (a * b - c == d)
        f = 1;
    else if (a - b * c == d)
        f = 1;
    if (f == 1)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}