#include <stdio.h>
int main()
{

    int n;

    scanf("%d", &n);
    while (n--)
    {
        int num;
        scanf("%d", &num);
        do
        {
            printf("%d ", num % 10);
            num = num / 10;
        } while (num != 0);
        printf("\n");
    }
    return 0;
}