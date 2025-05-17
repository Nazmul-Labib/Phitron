#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int fact(int n){
    if(n==0)return 1 ;
    
    
    return n*fact(n-1);;
}
int main(){

    int n;
    scanf("%d",&n);
    int m=fact(n);
    printf("%d",m);

    return 0;
}