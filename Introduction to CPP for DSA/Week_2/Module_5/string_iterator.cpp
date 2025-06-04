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
        string str = "hello world";
        cout << *str.begin() << endl;     // here this is a pointer
        cout << *(str.end() - 1) << endl; // it is also pointer and it prints the index after the last character so it should subtract 1
        for (string ::iterator itr = str.begin(); itr < str.end(); itr++)
        {
            cout << *itr;
            //    (itr!=str.end())?cout<<" ":cout<<endl;
        }
        for (auto itr = str.begin(); itr < str.end(); itr++)
        {
            cout << *itr;
            //    (itr!=str.end())?cout<<" ":cout<<endl;
        }
    }
    return 0;
}