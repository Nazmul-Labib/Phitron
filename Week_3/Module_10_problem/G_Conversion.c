#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main(){

        char str[100001];
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++){
            if(str[i]==','){
                str[i]=' ';
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+('a'-'A');
            }
            else{
                str[i]=str[i]-('a'-'A');
            }
        }
        printf("%s",str);
    return 0;
}