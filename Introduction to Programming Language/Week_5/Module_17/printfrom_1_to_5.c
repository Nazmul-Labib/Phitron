#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
void hello(int i){
    printf("%d\n",i++);
    if(i>5)return;
    hello(i);
}
int main(){
    int i=1;
    hello(i);

    
    return 0;
}