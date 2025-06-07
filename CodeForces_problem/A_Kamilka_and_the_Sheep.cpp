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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> *(arr + i);
        }
        cout<<(*max_element(arr,arr+n)-*min_element(arr,arr+n))<<endl;
       
    }
    return 0;
}