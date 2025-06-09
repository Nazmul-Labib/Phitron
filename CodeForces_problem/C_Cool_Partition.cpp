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

        vector<int> arr(n + 1);
        vector<int> nxt(n + 2);
        vector<int> last(n + 2, INT_MAX);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = n; i >= 1; i--)
        {
            nxt[i] = last[arr[i]];
            last[arr[i]] = i;
        }

        int pos = 1, count = 0;

        while (pos <= n)
        {
            int end = pos;

            while (true)
            {
                int maxnxt = 0;

                for (int i = pos; i <= end; i++)
                {
                    maxnxt = max(maxnxt, nxt[i]);
                }

                count++;

                if (maxnxt > n)
                    break;

                pos = end + 1;
                end = maxnxt;
            }

            break;
        }

        cout << count << "\n";
    }
    return 0;
}