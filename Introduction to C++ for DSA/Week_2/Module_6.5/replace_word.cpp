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
        string str;
        cin>>str;
        string target="EGYPT";
        
        while(size_t pos=str.find(target)!= string :: npos){
             str.replace(pos,target.length()," ");
        }
        cout<<str;


    }
    return 0;
}