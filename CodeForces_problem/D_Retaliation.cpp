#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 2) {
            int x = a[0] * 2 - a[1];
            int y = a[1] * 2 - a[0];

            if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0) {
                x /= 3;
                y /= 3;
                bool possible = true;
                for (int i = 0; i < n; ++i) {
                    int val = x * (i + 1) + y * (n - i);
                    if (val != a[i]) {
                        possible = false;
                        break;
                    }
                }
                cout << (possible ? "YES" : "NO") << '\n';
            } else {
                cout << "NO\n";
            }
            continue;
        }

        int denominator = n * n - 1;
        int numerator_x = a[0] * n - a[n - 1];
        int numerator_y = a[n - 1] * n - a[0];

        if (denominator == 0) {
            cout << "NO\n";
            continue;
        }

        if (numerator_x % denominator != 0 || numerator_y % denominator != 0) {
            cout << "NO\n";
            continue;
        }

        int x = numerator_x / denominator;
        int y = numerator_y / denominator;

        if (x < 0 || y < 0) {
            cout << "NO\n";
            continue;
        }

        bool possible = true;
        for (int i = 0; i < n; ++i) {
            int val = x * (i + 1) + y * (n - i);
            if (val != a[i]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}