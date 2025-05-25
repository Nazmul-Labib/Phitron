#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

    int a = 10, b = 20;
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d     b = %d", a, b);
    return 0;
}