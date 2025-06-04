#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << min(a, b) << endl;
        cout << max(a, b) << endl;
        swap(a, b);
        cout << a << " " << b << endl;
        cout << min({3, 6, 1, 0, 2}) << endl;
        cout << max({10, 56, 43, 25, 84}) << endl;
    }
    return 0;
}