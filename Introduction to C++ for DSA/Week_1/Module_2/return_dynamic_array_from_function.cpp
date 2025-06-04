#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int* fun(){
    int* a=new int[5];
   for(int i=0;i<5;i++){
    cin>>a[i];
   }
   return a;
}
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
        int* ptr=fun();
        for(int i=0;i<5;i++){
            cout<<ptr[i]<<" ";
        }
    }
    return 0;
}