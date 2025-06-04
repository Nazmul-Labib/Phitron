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
        string s = "hello world";
        cout << s.size() << endl;
        cout << s.max_size() << endl; // string ta koto size hote pare maximum ta return kore eta system er upor vary kore
        cout << s.capacity() << endl; // current capacity
        s.clear();                    // delete kre dey
        // s="1";
        if (s.empty())
        {
            cout << "faka" << endl;
        }
        s = "HEllo world";
        s.resize(5); // string er prothom 5 ta baad e fele dibe
        cout << s << endl;
        s="HEllo world";
        s.resize(20, 'x');
        cout << s << endl;
    }
    return 0;
}