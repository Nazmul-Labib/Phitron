#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p_sum=0;

    for(int i=0;i<col;i++){
        p_sum=p_sum+arr[0][i];
    }
    int R=0;
    int c_sum=0;

    for(int i=1;i<row;i++){
        c_sum=0;
        for(int j=0;j<col;j++){
            c_sum=c_sum+arr[i][j];

        }
        if(c_sum>p_sum){
            p_sum=c_sum;
            R=i;
        }
    }
    printf("%d",R);
    
        

    return 0;
}