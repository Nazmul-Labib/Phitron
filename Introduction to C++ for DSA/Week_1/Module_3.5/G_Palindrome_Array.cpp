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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f = 0;
        for (int i = 0, j = n-1; i <= j; i++, j--)
        {
            if (arr[i] != arr[j])
            {
                f = 1;
                break;
            }
        }
        (f == 0) ? cout << "YES" : cout << "NO";
        // cout<<sizeof(arr)/sizeof(arr[0]);
    }
    
    return 0;
}