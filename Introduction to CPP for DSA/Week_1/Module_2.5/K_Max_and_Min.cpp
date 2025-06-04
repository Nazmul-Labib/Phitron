#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int* readArray(int n) {
    int* ptr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
    }
    return ptr;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) {
        //int n;
        //cin >> n;
        int n=3;
        int* arr = readArray(3);

        int maxVal = LLONG_MIN;
        int minVal = LLONG_MAX;

        for (int i = 0; i < 3; i++) {
            if (arr[i] > maxVal) maxVal = arr[i];
            if (arr[i] < minVal) minVal = arr[i];
        }

        cout << minVal << " " << maxVal << "\n";
        delete[] arr; 
    }
    return 0;
}
