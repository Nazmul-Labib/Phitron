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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        int c = 0;
        int idx = 0;
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= x)
            {
                c++;
            }
            else
            {
                idx++;
                if (idx * arr[i] >= x)
                {
                    c++;
                    idx = 0;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}