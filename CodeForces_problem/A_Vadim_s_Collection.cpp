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
        string s;
        cin >> s;

        int arr1[10], arr2[10] = {0};

        for (int i = 0; i < 10; i++)
        {
            arr1[i] = s[i] - '0';
        }

        sort(arr1, arr1 + 10);

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr1[j] != -1 && arr1[j] >= (9 - i))
                {
                    arr2[i] = arr1[j];
                    arr1[j] = -1;
                    break;
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << arr2[i];
        }
        cout << endl;
    }
    return 0;
}
