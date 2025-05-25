#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void swap_it(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    printf("%d %d", a, b);
    return 0;
}