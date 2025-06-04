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
        char x;
        cin >> x;
        if (x >= 'a' && x <= 'z')
        {
            cout << "ALPHA" << endl
                 << "IS SMALL";
        }
        else if (x >= 'A' && x <= 'Z')
        {
            cout << "ALPHA" << endl
                 << "IS CAPITAL";
        }
        else
        {
            cout << "IS DIGIT";
        }
    }
    return 0;
}