#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

// Function to get absolute difference
int absDiff(int a, int b) {
    return a > b ? a - b : b - a;
}

// Function to get max of two
int max(int a, int b) {
    return a > b ? a : b;
}

// Function to find the maximum GCD possible
int findMaxGCD(int arr[], int n) {
    int maxGCD = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = absDiff(arr[i], arr[j]);
            if (diff == 0) continue;

            // Check all divisors of diff
            for (int d = 1; d * d <= diff; ++d) {
                if (diff % d == 0) {
                    int d1 = d;
                    int d2 = diff / d;

                    // For d1
                    int count[1000] = {0};
                    for (int k = 0; k < n; ++k) {
                        count[arr[k] % d1]++;
                    }
                    for (int k = 0; k < 1000; ++k) {
                        if (count[k] >= 2) {
                            maxGCD = max(maxGCD, d1);
                            break;
                        }
                    }

                    // For d2 (only if different from d1)
                    if (d1 != d2) {
                        int count2[1000] = {0};
                        for (int k = 0; k < n; ++k) {
                            count2[arr[k] % d2]++;
                        }
                        for (int k = 0; k < 1000; ++k) {
                            if (count2[k] >= 2) {
                                maxGCD = max(maxGCD, d2);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    return maxGCD;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a[MAX_N];
        scanf("%d", &n);

        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        int result = findMaxGCD(a, n);
        printf("%d\n", result);
    }

    return 0;
}
