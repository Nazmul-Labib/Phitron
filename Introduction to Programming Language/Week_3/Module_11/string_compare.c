#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char str1[50];
    char str2[50];
    scanf("%s %s", str1, str2);
    int i = 0;
    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("First comes first");
            break;
        }
        else if (str2[i] =='\0')
        {
            printf("Second comes first");
            break;
        }
        else if (str1[i] < str2[i])
        {
            printf("First comes first");
            break;
        }
        else if (str1[i] > str2[i])
        {
            printf("Second comes first");
            break;
        }
        else if (str1[i] == str2[i])
        {
            i++;
        }
    }
    return 0;
}