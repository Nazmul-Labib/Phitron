#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", arr[i]);
    }
    return 0;
}