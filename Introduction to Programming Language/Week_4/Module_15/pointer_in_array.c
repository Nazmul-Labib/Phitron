#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int arr[5] = {1, 20, 3, 4, 5};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);
    printf("%p\n", arr);

    printf("Print whole array\n");
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
    int i = 0;
    while (size--)
    {
        printf("%d\t", *arr + i);
        i++;
    }
    // printf("%d", *arr + 1);
    //*(arr+1) and *arr+1 are not same
    return 0;
}