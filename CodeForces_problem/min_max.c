#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
 min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d\t%d",min,max);

    return 0;
}