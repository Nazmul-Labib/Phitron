#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int row_f = 0, col_f = 0, null_f = 0, diag_f = 0, scal_f = 0, unit_f = 0;
    int row, column;
    printf("Enter matrix Row and Column:\n");
    scanf("%d %d", &row, &column);
    int arr[row][column];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (row < 2)

        row_f = 1;

    if (column < 2)
        col_f = 1;

    int square_f = 0;
    if (row == column && row_f == 0 && col_f == 0)
    {
        square_f = 1;
    }
    int out = 0;
    if (square_f == 1)
    {
        for (int i = 0; i < row; i++)
        {

            for (int j = 0; j < column; j++)
            {
                if (i != j && arr[i][j] > 0)
                {
                    diag_f = 0;
                    out = 1;
                    break;
                }
                else
                {
                    if (arr[i][j] > 0)
                        diag_f = 1;
                }

                if (out == 1)
                    break;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != 0)
            {
                null_f = 0;
                break;
            }
            else
                null_f = 1;
        }
    }
    int i = 0, j = 0;
    int R0 = row;
    while (row--)
    {
        if (diag_f == 1)
        {
            if (arr[i++][j++] == 1)
            {
                unit_f = 1;
            }
            else
            {
                unit_f = 0;
                break;
            }
        }
    }

    if (diag_f == 1)
    {
        for (int x = 0, y = 0; x < column - 1; x++, y++)
        {
            if (arr[x][y] != arr[x + 1][y + 1])
            {
                scal_f = 0;
                break;
            }
            else
            {
                scal_f = 1;
            }
        }
    }
    printf("\n\nMatrix type:\n");

    if (row_f == 1)
    {
        printf("Row Matrix\n");
    }
    if (col_f == 1)
        printf("Column Matrix\n");
    if (square_f == 1)
        printf("Square Matrix\n");
    if (diag_f == 1)
        printf("Diagonal Matrix\n");
    if (null_f == 1)
        printf("Null Matrix\n");
    if (scal_f == 1)
        printf("Scalar Matrix\n");
    if (unit_f == 1)
        printf("Unit Matrix\n");
    printf("\nMatrix Order = %d X %d\n", R0, column);
    return 0;
}
