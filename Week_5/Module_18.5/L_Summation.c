#include <stdio.h>

long long sumArray(int arr[], int n, int i) {
    if (i == n) {
        return 0; // base case: no elements left to sum
    }
    return arr[i] + sumArray(arr, n, i + 1);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    long long result = sumArray(arr, N, 0);
    printf("%lld\n", result);

    return 0;
}
