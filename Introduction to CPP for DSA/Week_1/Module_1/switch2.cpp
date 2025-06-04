#include <bits/stdc++.h>
#include <iomanip>
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
        switch (n % 2)
        {
        case 1:
            cout << "Odd";
            break;
        case 0:
            cout << "Even";
            break;
        }
    }
    return 0;
}