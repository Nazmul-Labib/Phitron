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
        int n;
        cin >> n;
        int arr[n];
        int freq[10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> *(arr + i);
            freq[arr[i] - 0]++;
        }

        int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c5 = 0, count = 0;
        int f = 0;
        if (freq[0] < 3 || freq[1] < 1 || freq[2] < 2 || freq[3] < 1 || freq[5] < 1)
        {
            cout << 0 << endl;
            f = 1;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 0)
                {
                    c0++;
                }
                if (arr[i] == 1)
                {
                    c1++;
                }
                if (arr[i] == 2)
                {
                    c2++;
                }
                if (arr[i] == 3)
                {
                    c3++;
                }
                if (arr[i] == 5)
                {
                    c5++;
                }
                count++;
                if (c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1)
                {
                    break;
                }
            }
        }
        if (f == 0)
            cout << count << endl;
    }
    return 0;
}