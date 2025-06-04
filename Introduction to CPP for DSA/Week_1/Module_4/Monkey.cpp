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
        char str[100005];
        while (cin.getline(str, 100005))
        {
            char str2[100005];
            int len = strlen(str);
            int idx = 0;

            for (int i = 0; i < len; i++)
            {
                if (str[i] != ' ')
                {
                    str2[idx++] = str[i];
                }
            }

            sort(str2, str2 + idx);

            for (int i = 0; i < idx; i++)
            {
                cout << str2[i];
            }
            cout << '\n';
        }
    }
    return 0;
}