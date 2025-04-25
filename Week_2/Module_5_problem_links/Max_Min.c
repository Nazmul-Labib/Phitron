#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Initialize min and max with A
    int min = A;
    int max = A;

    // Compare with B
    if (B < min) min = B;
    if (B > max) max = B;

    // Compare with C
    if (C < min) min = C;
    if (C > max) max = C;

    printf("%d %d\n", min, max);

    return 0;
}
