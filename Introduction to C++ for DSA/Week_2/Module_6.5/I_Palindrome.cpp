#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
        string str1;
        cin>>str1;
        string str2=str1;
        reverse(str2.begin(),str2.end());
        (str1==str2)?cout<<"YES":cout<<"NO";
    }
    return 0;
}