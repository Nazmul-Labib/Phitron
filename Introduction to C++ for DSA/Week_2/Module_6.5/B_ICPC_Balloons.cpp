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
        string str;
        cin >> n >> str;
        int freq[26] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            freq[str[i] - 'A']++;
        }
        int c = 0, sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                sum = sum + freq[i];
                c++;
            }
        }
        cout << sum + c << endl;
    }
    return 0;
}