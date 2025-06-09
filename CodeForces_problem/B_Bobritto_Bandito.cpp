#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        // cout << l << " " << l + m << endl;
        int abs_l = abs(l);
        if (m <= abs_l)
        {
            cout << (0 - m) << " " << 0 << endl;
        }
        else
        {
            cout << l << " " << l + m << endl;
        }
    }
    return 0;
}