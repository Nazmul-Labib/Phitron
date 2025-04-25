#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    // printf("%s",str);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("%s", str);
    return 0;
}