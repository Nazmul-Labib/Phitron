#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char a[20];
    char b[20];
    scanf("%s %s", a, b);
    int len = strlen(b);
    for (int i = 0; i <= len; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}