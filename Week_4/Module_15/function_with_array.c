#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
void fun(int a[])
{
    a[3] = 1000;
    printf("Address of array in fun function %p\n", a);
}
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    printf("%d\n", arr[3]);
    fun(arr);
    printf("%d\n", arr[3]);
    printf("Address of array in main function %p\n", arr);
    int i = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    while (size--)
    {
        printf("%d\t", *(arr + i));
        i++;
    }
    printf("\n\n");
    printf("%p\n", arr);
    printf("%p\n", &arr);

    printf("\n\n");
    printf("%p\n", (void *)arr);        // same address
    printf("%p\n", (void *)(&arr));     // same address
    printf("%p\n", (void *)(arr + 1));  // address + sizeof(int)
    printf("%p\n", (void *)(&arr + 1)); // address + sizeof(arr)

    return 0;
}