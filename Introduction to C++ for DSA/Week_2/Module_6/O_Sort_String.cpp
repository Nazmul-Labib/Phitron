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
        cin>>n;
        char str[n];
        cin>>str;
        int freq[26]={0};
        for(char c:str){
            freq[c-'a']++;
        }
        for(int i=0;i<26;i++){
            while(freq[i]--){
                cout<<(char)(i+'a');
            }
        }

    }
    return 0;
}