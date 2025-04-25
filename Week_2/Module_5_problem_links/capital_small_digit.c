#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if ((int)ch < 65)
        printf("IS DIGIT");
    else if ((int)ch < 97)
        printf("ALPHA\nIS CAPITAL");
    else
        printf("ALPHA\nIS SMALL");
    return 0;
}