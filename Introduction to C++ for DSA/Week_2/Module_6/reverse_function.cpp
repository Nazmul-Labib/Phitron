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
        int n;
        // cin>>n;
        // int arr[n];
        // for(int i=0;i<n;i++){
        //     cin>>arr[i];
        // }
        // reverse(arr,arr+n);
        // for(int D:arr){
        //     cout<<D<<endl;
        // }
        string str;
        cin>>str;
        //reverse(str.begin(),str.end());
        string str1=str;
        reverse(str.begin(),str.end());
        // cout<<str<<endl;
        if(str1==str){
              cout<<"Palindrome";

        }
        else{
            cout<<"Not";
        }
    }
    return 0;
}