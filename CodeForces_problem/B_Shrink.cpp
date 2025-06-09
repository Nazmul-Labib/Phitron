#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> construct_permutation(int n) {
    vector<int> perm;
    if (n % 2 == 1) {
        for (int i = 1; i <= n; i += 2) {
            perm.pb(i);
        }
        for (int i = n - 1; i >= 2; i -= 2) {
            perm.pb(i);
        }
    } else {
        int k = n / 2;
        for (int i = 2; i <= k; ++i) {
            perm.pb(i);
        }
        perm.pb(n);
        for (int i = k + 1; i < n; ++i) {
            perm.pb(i);
        }
        perm.pb(1);
    }
    return perm;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> perm = construct_permutation(n);
        for (int i = 0; i < perm.size(); ++i) {
            if (i > 0) {
                cout << " ";
            }
            cout << perm[i];
        }
        cout << "\n";
    }
    return 0;
}