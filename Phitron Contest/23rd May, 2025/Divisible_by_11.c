#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int main(){

    char digit[10000];
    gets(digit);
    int odd=0;
    for(int i=0;digit[i]!='\0';i+=2){
       odd = odd + (digit[i]-'0');
    }
    int even=0;
    for(int i=1;digit[i]!='\0';i+=2){
        even=even+ (digit[i]-'0');
    }
    int eleven=abs(odd-even);
    if(eleven%11==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}