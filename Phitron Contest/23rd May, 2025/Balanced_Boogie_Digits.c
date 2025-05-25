#include <stdio.h>

int main() {
    int L, R;
    scanf("%d %d", &L, &R);

    int f = 0;

    for (int i = L; i <= R; i++) {
        int temp = i;
        int c_even = 0, c_odd = 0;

        while (temp != 0) {
            int rem = temp % 10;
            if (rem % 2 == 0)
                c_even++;
            else
                c_odd++;
            temp = temp / 10;
        }

        if (c_even == c_odd && c_even != 0) {
            printf("%d\n", i);
            f = 1;
        }
    }

    if (f==0)
        printf("-1");

    return 0;
}
