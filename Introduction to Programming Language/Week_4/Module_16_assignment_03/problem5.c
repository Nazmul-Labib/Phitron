#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void odd_even()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int i = 0, count_odd = 0, count_even = 0;
    while (N--)
    {
        if (*(A + i) % 2 != 0)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
        i++;
    }
    printf("%d %d", count_even, count_odd);
}
int main()
{

    
    odd_even();
    return 0;
}