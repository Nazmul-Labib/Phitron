#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char a[101], b[101];
    scanf("%s %s", a, b);
    int len = strlen(a);
    int len2 = strlen(b);
    for (int i = 0; i <= len2; i++)
    {
        a[len + i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}