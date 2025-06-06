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
        string str1, str2;
        cin >> str1 >> str2;
        int size1 = str1.size();
        int size2 = str2.size();
        int maxsize = max(size1, size2);
        // int i = 0;

        for (int i = 0; i < maxsize; i++)
        {
            if (i < size1)
            {
                cout << str1[i];
            }
            if (i < size2)
            {
                cout << str2[i];
            }
        }
        if (t != 0)
            cout << endl;
    }
    return 0;
}