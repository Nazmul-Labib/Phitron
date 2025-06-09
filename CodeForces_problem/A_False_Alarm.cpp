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
            cin >> arr[i];
        }
        int pass = 0, idx, f=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                idx = i;
                break;
            }
        }
        if (x >= (n - idx))
        {
            cout << "YES" << endl;
            f=1;
        }
        else
        {
            idx = idx + x;
            for (int i = idx; i < n; i++)
            {
                if (arr[i] == 1)
                {
                    cout << "NO" << endl;
                    f=1;
                    break;
                }
               
            }
        }
        // (==0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
        if(f==0)
        cout<<"YES"<<endl;
    }
    return 0;
}