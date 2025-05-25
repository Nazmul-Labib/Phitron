#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main(){

    char str[101];
    scanf("%s",str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        //if(str[i]=='\0')break;
        count++;
    }
    printf("%d",count);

    return 0;
}