#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void prt(int n)
{
    if (n == 0)
        return;
    printf("I love Recursion\n");
    prt(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    prt(n);
    return 0;
}