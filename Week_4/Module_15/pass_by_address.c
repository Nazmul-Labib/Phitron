#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void fun(int* x)
{
    *x = 10;
    printf("Fun function er x er address %p\n",x);
}
int main()
{

    int x;
    scanf("%d", &x);
    fun(&x);
    printf("%d\n", x);
    printf("Main function er x er address %p\n",&x);
    return 0;
}