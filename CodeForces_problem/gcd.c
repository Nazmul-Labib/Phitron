#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int gcd(int x, int y)
{
    int rem = 1;
    int temp = x;
    while (rem != 0)
    {
        rem = y % temp;
        y = (y / temp) * temp;
        x=temp;
        temp = rem;
    }
    return x;
}
int main()
{
printf("%d",gcd(5,17));
    return 0;
}