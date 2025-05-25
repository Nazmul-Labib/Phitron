#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void prt(int n, int i)
{

    if (i > n)
        return;
    printf("%d\n", i);
    prt(n, i + 1);
}
int main()
{

    int n;
    scanf("%d", &n);
    prt(n, 1);
    return 0;
}