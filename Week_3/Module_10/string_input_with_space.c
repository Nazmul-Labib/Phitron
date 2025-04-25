#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char str[20];
    gets(str);
    printf("%s\n", str);
    fgets(str,5,stdin);
    printf("%s",str);
    //fgets enter chaple input neoa bndho kore kintu enter ta keo input hisebe niye ney

    return 0;
}