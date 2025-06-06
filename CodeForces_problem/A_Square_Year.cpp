#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t ;
    cin >> t;
    while(t--) {
        string str;
        cin>>str;
        double num=stoi(str);//used for to convert a string into number
        double root=sqrt(num);
        if(root != (int)root){
            cout<<-1<<endl;
        }
        else{
            // for(int i=0;i<9999;i++){
            //     for(int j=i+1;j<=9999;j++){
            //           if(i+j==)
            //     }
            // }
            cout<<0<<" "<<root<<endl;
        }

    }
    return 0;
}