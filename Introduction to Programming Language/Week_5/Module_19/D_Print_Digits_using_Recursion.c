#include <stdio.h>

void printDigits(int n) {
    if (n == 0) return;
    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        
        if (n == 0) {
            printf("0\n");
        } else {
            printDigits(n);
            printf("\n");
        }
    }

    return 0;
}
