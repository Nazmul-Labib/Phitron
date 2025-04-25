#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int main()
{

    char A[11];
    char B[11];
    scanf("%s %s", A, B);
    printf("%d %d\n", strlen(A), strlen(B));
    printf("%s%s\n", A, B);
    printf("%c%s %c%s", B[0], A + 1, A[0], B + 1);
    return 0;
}