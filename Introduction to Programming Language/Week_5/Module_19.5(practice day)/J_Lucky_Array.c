#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    // Sort in ascending order (selection sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    int count = 0;
    long long first = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] == first)
            count++;
        else
            break;
    }

    if (count % 2 == 0)
        printf("Unlucky\n");
    else
        printf("Lucky\n");

    return 0;
}
