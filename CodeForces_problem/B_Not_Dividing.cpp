#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // First, handle a[0] and a[1] if necessary
    if (n > 1 && a[1] % a[0] == 0) {
        a[0]++;
    }
    
    // Process the rest of the array
    for (int i = 1; i < n; ++i) {
        if (a[i] % a[i-1] == 0) {
            a[i]++;
        }
        // Ensure previous condition still holds
        if (i > 1 && a[i-1] % a[i-2] == 0) {
            a[i-1]++;
        }
    }
    
    // Output the result
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}