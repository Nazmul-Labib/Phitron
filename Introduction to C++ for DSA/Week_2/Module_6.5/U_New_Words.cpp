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
    // cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int ce = 0, cg = 0, cy = 0, cp = 0, ct = 0;
        for (char c : str)
        {
            if (c == 'e' || c == 'E')
            {
                ce++;
            }
            if (c == 'g' || c == 'G')
            {
                cg++;
            }
            if (c == 'y' || c == 'Y')
            {
                cy++;
            }
            if (c == 'p' || c == 'P')
            {
                cp++;
            }
            if (c == 't' || c == 'T')
            {
                ct++;
            }
        }
        cout<<min({ce,cg,cy,cp,ct});
    }
    return 0;
}