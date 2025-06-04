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
        int n, sum;
        cin >> n >> sum;
        //int SUM = sum;
        int arr[n], f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
           // sum = sum - arr[i];
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
               // sum = sum - arr[j];
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                        continue;
                    if (sum == arr[k]+arr[j]+arr[i])
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 1)
                    break;
            }
            if (f == 1)
                break;
            //sum = SUM;
        }
        (f == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}