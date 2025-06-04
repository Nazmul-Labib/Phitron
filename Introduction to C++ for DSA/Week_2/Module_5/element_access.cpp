#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        cout << s[1] << endl;
        cout << s.at(2) << endl;
        cout << s.back() << endl;
        cout << s.front() << endl;
    }
    return 0;
}