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
        long long arr[n], min = LLONG_MAX, max = LLONG_MIN;
        int max_idx, min_idx;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (min > arr[i])
            {
                min = arr[i];
                min_idx = i;
            }
            if (max < arr[i])
            {
                max = arr[i];
                max_idx = i;
            }
        }
        arr[min_idx] = max;
        arr[max_idx] = min;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}