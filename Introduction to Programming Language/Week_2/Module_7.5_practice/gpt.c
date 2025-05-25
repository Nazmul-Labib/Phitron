#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int min_val, min_pos;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min_val = arr[0];
    min_pos = 1; // 1-indexed position

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_pos = i + 1; // convert 0-index to 1-index
        }
    }

    printf("%d %d\n", min_val, min_pos);
    return 0;
}
