#include <stdio.h>
int main()
{
    int num;
    printf("Labib");
    scanf("%d", &num);
    int count = 0;
    int num2 = num;
    while (num2 != 0)
    {
        num2 = num2 / 10;
        count++;
    }
    for (int i = 0; i < count - 1; i++)
    {
        num = num / 10;
    }
    // printf("%d", num);
    if (num % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}