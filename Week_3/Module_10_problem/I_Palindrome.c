#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char str[1001];
    scanf("%s", str);
    int j = strlen(str) - 1;
    int i = 0, f = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if (f == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}