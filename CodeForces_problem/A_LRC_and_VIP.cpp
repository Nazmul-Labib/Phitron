#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

       
        int freq[10001] = {0};

        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        
        bool valid = true;
        int limit = n;

        for (int i = 0; i <= 10000; i++) {
            if (freq[i] ==limit) {
                cout << "NO" << endl;
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
            int max_val = *max_element(arr, arr + n);
            for (int i = 0; i < n; i++) {
                if (arr[i] == max_val) {
                    cout << 2 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
