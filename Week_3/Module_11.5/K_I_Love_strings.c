#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
void test()
{
    char S[51];
    char T[51];
    scanf("%s %s", S, T);
    // printf("%c", S[30]);
    int Slen = strlen(S);
    int Tlen = strlen(T);
    if (Slen < Tlen || Slen == Tlen)
    {
        for (int i = 0; i < Slen; i++)
        {
            printf("%c%c", S[i], T[i]);
        }
        for (int i = Slen; i < Tlen; i++)
        {
            printf("%c", T[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = 0; i < Tlen; i++)
        {
            printf("%c%c", S[i], T[i]);
        }
        for (int i = Tlen; i < Slen; i++)
        {
            printf("%c", S[i]);
        }
        printf("\n");
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