#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%p\n",&n);

    int* ptr=&n;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);

    printf("%d\n",*ptr);

    int** pptr=&ptr; //double pointer
    printf("%d\n",**pptr);

    **pptr=100;
    printf("%d\n",n);

    return 0;
}