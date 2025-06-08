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
        int n;
        cin >> n;
        char str[n];
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            if (str[i] == '1')
            {
                count1++;
            }
        }
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                total = total + count1 + 1;
            }
            else
                total = total + count1 - 1;
        }
        cout << total << endl;
    }
    return 0;
}