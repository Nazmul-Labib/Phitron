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
        getline(cin, str);
        stringstream ss(str);
        string word;
        ss >> word;
        reverse(word.begin(), word.end());
        cout << word;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            cout << " " << word;
        }
    }
    return 0;
}