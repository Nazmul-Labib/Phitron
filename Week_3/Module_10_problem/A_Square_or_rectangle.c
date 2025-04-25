#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
void test()
{
    int w, h;
    scanf("%d%d", &w, &h);
    if (w == h)
    {
        printf("Square\n");
    }
    else
    {
        printf("Rectangle\n");
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