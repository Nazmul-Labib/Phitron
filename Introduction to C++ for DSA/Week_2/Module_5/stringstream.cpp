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
        string str;
        getline(cin, str);
        cout << str << endl;
        stringstream ss(str);

        string word;
        // ss >> word;
        // cout << word << endl;
        // ss >> word;
        // cout << word << endl;
        // ss >> word;
        // cout << word << endl;
        // ss >> word;
        // cout << word << endl;
        // ss >> word;
        // cout << word << endl;
        while(ss>>word){
            cout<<word<<endl;
        }
        
    }
    return 0;
}