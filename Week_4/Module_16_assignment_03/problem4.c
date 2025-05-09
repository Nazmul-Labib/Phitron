#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int is_palindrome(char S[])
{
    int len = strlen(S);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{

    char S[1001];
    scanf("%s", S);
    int f = is_palindrome(S);
    if (f == 1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}