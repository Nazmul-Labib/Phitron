#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
        string str;
        getline(cin,str);
        cout<<str<<endl;

        int x;
        cin>>x;
        cin.ignore();
        getline(cin,str);
        cout<<x<<str;
    }
    return 0;
}