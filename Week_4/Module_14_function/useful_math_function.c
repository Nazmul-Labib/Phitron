#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    printf("\n%d\n", (int)ceil(4.2));
    int ans = ceil(9.9);
    printf("%d", ans);

    printf("\n%d", (int)floor(4.2));
    printf("\n%d", (int)round(25.49));
    printf("\n%f", (float)sqrt(9));
    printf("\n%d", (int)pow(3, 2));
    printf("\n%d", (int)abs(-10));
    return 0;
}