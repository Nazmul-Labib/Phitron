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

    prt(n, i + 1);
    if(i==1)
    printf("%d", i);
    else{
        printf("%d ",i);
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    prt(n, 1);
    return 0;
}