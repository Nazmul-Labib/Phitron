#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
void test()
{
    char str[40];
    fgets(str, 40, stdin);
    int len = strlen(str);
    printf("%c", str[0]);
    for (int i = 1; i < len; i++)
    {
        if (str[i - 1] == ' ')
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main()
{

    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        test();
    }
    return 0;
}