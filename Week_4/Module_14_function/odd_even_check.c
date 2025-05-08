#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int odd_even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
int check()
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
void check2(int x)
{
    printf("First input is ");
    if (x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
void check3()
{
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main()
{

    int a;
    scanf("%d", &a);
    // char str[5] ;
    int flag = odd_even(a);
    if (flag == 1)
        printf("Even\n");
    else
        printf("Odd\n");
    flag = check();
    if (flag == 1)
        printf("Even\n");
    else
        printf("Odd\n");
    check2(a);
    check3();
    return 0;
}