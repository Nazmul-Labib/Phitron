#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void prt(int i)
{
    if (i == 0)
        return;
    printf("%d\n", i--);
    prt(i);
}
int main()
{

    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    prt(n);
    return 0;
}