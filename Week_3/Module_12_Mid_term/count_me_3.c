#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);
        int capital = 0, small = 0, digit = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else
                digit++;
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}