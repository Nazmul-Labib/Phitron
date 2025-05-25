#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

void test(){
    char str[1005];
    // fgets(str, sizeof(str), stdin);
    gets(str);


    int arr[26] = {0};
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            arr[(int)str[i] - 97]++;
    }

    int odd_count = 0;
    for(int i=0; i<26; i++){
        if(arr[i] % 2 != 0)
            odd_count++;
    }

    if(odd_count == 0)
        printf("0\n");
    else
        printf("%d\n", odd_count - 1);
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();  
    while(t--){
        test();
    }
    return 0;
}
