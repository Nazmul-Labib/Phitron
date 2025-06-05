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
        int A, B, C;
        char S, Q;
        cin >> A >> S >> B >> Q >> C;
        if ((S == '+' && A + B == C) || (S == '-' && A - B == C) || (S == '*' && A * B == C))
        {
            cout << "Yes";
        }
        else
        {
            if (S == '+')
                cout << A + B;
            if (S == '-')
                cout << A - B;
            if (S == '*')
                cout << A * B;
        }
    }
    return 0;
}