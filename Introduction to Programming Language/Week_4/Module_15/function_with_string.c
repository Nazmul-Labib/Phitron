#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void fun(char str[])
{
    printf("%s\n", str);
    printf("%d\n", strlen(str));
}
int main()
{

    char str[10];
    scanf("%s", str);
    fun(str);
    return 0;
}