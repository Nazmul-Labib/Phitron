#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%p\n",(void*)&arr[0]); 
    printf("%p\n",(void*)&arr[1]); 
    printf("%p",(void*)&arr[2]); 
    
    return 0;
}