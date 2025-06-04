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
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str.size() > 10)
        {
            cout << str[0] << str.size() - 2 << str.back() << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}