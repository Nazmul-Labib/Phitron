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
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                n = i + 1;
                break;
            }
        }
        (n % 2 != 0) ? cout << "Lucky" : cout << "Unlucky";
    }
    return 0;
}