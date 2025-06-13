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
    // cin >> t;
    while (t--)
    {
        string str, target;
        getline(cin, str);
        target = "Jessica";
        bool f = false;
        stringstream ss(str);
        string word;
        while (ss >> word)
        {
            if (word == target)
            {
                cout << "YES" << endl;
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}