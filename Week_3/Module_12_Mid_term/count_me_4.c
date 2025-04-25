#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    char S[10001];
    scanf("%s", S);
    char Str[27] = "abcdefghijklmnopqrstuvwxyz";
    int arr[10000] = {0};
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        arr[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>0){
            printf("%c - %d\n",Str[i],arr[i]);
        }
    }

    return 0;
}