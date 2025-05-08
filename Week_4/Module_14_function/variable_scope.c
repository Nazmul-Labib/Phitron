#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
int x = 100; // global variable
void fun()
{
    int sum = 40;
    printf("%d", sum);
}
int main()
{

    int sum = 20;
    printf("%d", sum);
    for(int i=0;i<10;i++){
        printf("%d",i);   //i local variable
    }
    fun();
    return 0;
}