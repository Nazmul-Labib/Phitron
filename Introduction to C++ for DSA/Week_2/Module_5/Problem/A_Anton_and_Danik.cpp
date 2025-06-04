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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int c = 0;
        for (auto itr = str.begin(); itr < str.end(); itr++)
        {
            if (*itr == 'A')
            {
                c++;
            }
        }
        if (c > (n - c))
        {
            cout << "Anton";
        }
        else if (c < (n - c))
        {
            cout << "Danik";
        }
        else
        {
            cout << "Friendship";
        }
    }
    return 0;
}