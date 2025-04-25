#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char str[50];
    scanf("%s", str);
    int len = strlen(str);
    printf("%d", len);
    return 0;
}