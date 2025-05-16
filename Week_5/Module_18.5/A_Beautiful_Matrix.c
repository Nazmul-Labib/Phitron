#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int arr[5][5], f = 0;
    int row, column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1){
                row=i;
                column=j;
                f=1;
                break;
            }
           
        }
        if(f==1)break;
       
    }
    //  for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if(arr[i][j]==1){
    //             row=i;
    //             column=j;
    //             f=1; break;
    //         }
           
    //     }
    //     if(f==1)break;
       
    // }
    printf("%d",abs(row-2)+abs(column-2));

    return 0;
}