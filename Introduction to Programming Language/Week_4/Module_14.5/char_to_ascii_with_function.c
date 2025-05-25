#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int chartoascii(char ch)
{
    int i = (int)ch;
    return i;
}
int main()
{

    char ch;
    scanf("%c", &ch);
    int val = chartoascii(ch);
    printf("%d", val);
    return 0;
}