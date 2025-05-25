#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int main(){

    int n, k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1,temp;j<n;j++){
              if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
        }
    }
    int f=n-1;
    int count=0;
    //for(int i=0;i<n;i++)printf("%d ",arr[i]);

    for(int i=0;i<n;i++){
        for(int j=f;j>i;j--){
            if(arr[i]+arr[j]<=k){
              count++;
              f=j-1;
              break;
            }
        }
    }
    printf("%d",count);

    return 0;
}