#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    char S[10000001];
    scanf("%s", S);
    char arr1[27] = "abcdefghijklmnopqrstuvwxyz";
    int arr[26] = {0};
    int len=strlen(S);
    for (int i = 0; i < len; i++)
    {
        arr[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c : %d\n", arr1[i], arr[i]);
        }
    }
    return 0;
}