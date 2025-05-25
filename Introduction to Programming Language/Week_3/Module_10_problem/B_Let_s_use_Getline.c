#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char str[1000001];
    gets(str);
    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}