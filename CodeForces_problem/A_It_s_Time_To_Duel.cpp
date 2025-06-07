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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
            count1++;
        }
        int f = 0;
        for (int i = 0; i < n ; i++)
        {
            
                if (arr[i] == 0 && arr[i+1] == 0 || count1==n)
                {
                    f = 1;
                    break;
                }
            
           
        }
        (f == 0) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}