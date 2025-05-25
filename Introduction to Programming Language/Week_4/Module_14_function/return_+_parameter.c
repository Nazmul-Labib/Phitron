#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int multiplication(int x, int y);
int add(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}
int sub(int x, int y)
{
    int minus = x - y;
    return minus;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = add(x, y);
    int minus = sub(x, y);
    int mul=multiplication(x, y);
    printf("%d %d %d", sum, minus, mul);

    return 0;
}
int multiplication(int x, int y)
{
    int mul = x * y;
    return mul;
}