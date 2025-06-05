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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // int *ptr = new int[1];
        // int x=0;
        int max=LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
               max=min(arr[i]+arr[j]+j-i,max);
            }
        }
        // int min=*min_element(ptr,ptr+(x+1));
        // cout<<min;
        // delete[] ptr;
        cout<<max<<endl;
    }
    return 0;
}