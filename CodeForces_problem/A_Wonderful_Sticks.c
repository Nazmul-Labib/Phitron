#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
void test()
{
    char str[101];
    int arr[101];
    int n;
    scanf("%d", &n);
    scanf("%s", str);
    int len = strlen(str);
    // int arr[len];
    int i = 1, j = len + 1;
    for (int x = len - 1; x >= 0; x--)
    {
        if (x == 0)
        {
            if (str[x] == '>')
            {
                arr[1] = j--;
                arr[0] = i++;
            }
            else
            {
                arr[1] = i++;
                arr[0] = j--;
            }
        }
        else if (str[x] == '>')
        {
            arr[x+1] = j--;
        }
        else if(str[x]=='<')
        {

            arr[x+1] = i++;
        }
    }
    for ( i = 0; i < len + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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