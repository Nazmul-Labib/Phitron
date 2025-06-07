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
        int arr[n];
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        int i = 0;
        sort(arr, arr + n);
        int MAX = arr[n - 1];
        int *MIN = &arr[0];
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if ((*(MIN) + MAX) % 2 != 0)
            {
                MIN = MIN + 1;
                count++;
            }
            else
                break;
        }
        int *MAX1 = &arr[n - 1];
        int MIN1 = arr[0];
        for (int i = n - 1; i >= 0; i--)
        {
            if ((MIN1 + *(MAX1)) % 2 != 0)
            {
                MAX1 = MAX1 - 1;
                count1++;
            }
            else
                break;
        }

        cout << min(count, count1) << endl;
        // cout<<count<<" "<<count1;
    }
    return 0;
}


// 1
// 8
// 8 6 3 6 4 1 1 6
