#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1;
    for (printf("%d", 8); printf("%d", 0);)
    {
        if (i == 10)
            break;
        printf("%d\n", i);
        i++;
    }
    printf("New for\n");
    for (int j = 2; j <= 100; j *= 2)
        printf("%d\n", j);

    return 0;
}