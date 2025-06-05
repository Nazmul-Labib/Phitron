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
        int i = 0;
        int size = n;
        while (n--)
        {
            cin >> arr[i++];
        }
        sort(arr, arr + size);
        i = 0;
        while (size--)
        {
            cout << arr[i++] << " ";
        }
    }
    return 0;
}