#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int* ptr1;
int* ptr2;
void fun(){
    int x=45;
    int* p=new int;
    *p=50;
    ptr2=p;
    ptr1=&x;
    cout<<"inside fun-->"<<*ptr1<<" "<<*ptr2<<endl;
}
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
       fun();
    }
    cout<<"inside main-->"<<*ptr1<<" "<<*ptr2<<endl;
    return 0;
}