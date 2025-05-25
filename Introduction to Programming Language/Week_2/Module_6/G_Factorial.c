#include <stdio.h>
void test()
{
    int n;
    scanf("%d", &n);
    long long int fact = 1;
    while (n >= 1)
    {
        fact = fact * n;
        n--;
    }
    printf("%lld\n", fact);
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