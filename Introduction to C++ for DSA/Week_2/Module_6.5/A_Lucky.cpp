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
        string str;
        cin >> str;
        int f_sum = 0, l_sum = 0, div = 10;

        for (int i = 0; i < str.length(); i++)
        {
            if (i <= 2)
            {
                f_sum = f_sum + (str[i] - '0');
            }
            else
            {
                l_sum = l_sum + (str[i] - '0');
            }
        }
        (f_sum == l_sum) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}