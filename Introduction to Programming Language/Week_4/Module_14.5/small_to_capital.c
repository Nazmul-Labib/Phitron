#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
char small_to_capital(char ch)
{
    // int i= ch - 32;
    // return (char)i;
    return ch - 32;
}
int main()
{

    char ch;
    scanf("%c", &ch);
    ch = small_to_capital(ch);
    printf("%c", ch);
    return 0;
}