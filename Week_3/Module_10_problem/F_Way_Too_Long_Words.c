#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
void test()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    if (len <= 10)
    {
        printf("%s\n", str);
    }
    else
    {

        printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
    }
}
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        test();
    }
    return 0;
}