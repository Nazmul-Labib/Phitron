#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int m, n, jadu_f = 1;
    ;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int main_sum = 0, sec_sum = 0;
    // sec_sum=0;
    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            if (arr[i][i] != 1)
            {
                jadu_f = 0;
                break;
            }
            else
            {
                main_sum = main_sum + arr[i][i];
            }
        }
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (arr[i][j] != 1)
            {
                jadu_f = 0;
                break;
            }
            else
            {
                sec_sum = sec_sum + arr[i][j];
            }
        }
    }
    else
    {
        jadu_f = 0;
    }
    int sum = 0;
    if (jadu_f == 1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    if (n % 2 != 0)
    {
        if ((main_sum + sec_sum - 1) != sum)
        {
            jadu_f = 0;
        }
    }
    else
    {
        if ((main_sum + sec_sum) != sum)
        {
            jadu_f = 0;
        }
    }

    if (jadu_f == 1)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}