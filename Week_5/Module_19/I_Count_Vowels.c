#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int prt(char str[], int i, int count)
{

    if (str[i] == '\0')
        return count;
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        count++;
    }
    prt(str, i + 1, count);
    // printf("%d",count);
}
int main()
{

    char str[201];
    gets(str);
    int count = prt(str, 0, 0);
    printf("%d", count);

    return 0;
}