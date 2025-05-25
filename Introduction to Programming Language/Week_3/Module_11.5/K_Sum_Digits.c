#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    int sum = 0, i = 0;
    while (str[i] != '\0')
    {
        sum = sum + str[i] - '0';
        i++;
    }
    printf("%d", sum);
    // printf("%d",'3'-);
    return 0;
}