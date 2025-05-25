#include <stdio.h>
int main()
{

    int pass = 1999;
    int n;
    while (scanf("%d", &n))
    {
        if (n == pass)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }
    return 0;
}