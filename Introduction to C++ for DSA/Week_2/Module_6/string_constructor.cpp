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
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // string str="Humayera Hia";
        string str("Humayera Hia");
        cout << str << endl;
        string str1("Humayera Hia", 5);
        cout << str1 << endl;
        string str3(str, 1);
        cout << str3 << endl;
        string str4(5, 'H');
        cout << str4 << endl;
    }
    return 0;
}