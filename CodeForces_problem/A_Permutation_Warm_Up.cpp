#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = n, sum = 0, j=1;

        while (n--)
        {
            sum = sum + abs(i-j);
            i--;
            j++;
        }

        // reverse(arr,arr+n);
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum=sum+abs(arr[i]-(i+1));
        // }
        cout<<(sum/2)+1<<endl;
    }
    return 0;
}