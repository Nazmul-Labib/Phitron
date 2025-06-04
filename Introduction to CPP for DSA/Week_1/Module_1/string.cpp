#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
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
    int t = 1;
    // cin >> t;
    while (t--)
    {
        char str[100];
        cin.getline(str, 100);
        cout << str << endl;

        int x;
        cin >> x;
        cin.ignore(); // used for to skip enter
        char str1[100];
        cin.getline(str1, 100);
        cout << x << endl
             << str1 << endl;

        string str2;
        cin >> str2;
        cout << str2 << endl;
    }
    return 0;
}