#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int *ptr = new int[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> ptr[i];
        }
        int *ptr1 = new int[5];
        for (int i = 0; i < 3; i++)
        {
            ptr1[i] = ptr[i];
        }
        for (int i = 3; i < 5; i++)
        {
            cin >> ptr1[i];
        }
        for (int i = 0; i < 5; i++)
        {
            cout << ptr1[i] << " ";
            if(i==4)cout<<endl;
        }
        delete[] ptr;
        for (int i = 0; i < 3; i++)
        {
            cout << ptr[i] << " ";
        }
        for(int i=5;i<10;i++){
            cin>>ptr1[i];
        }
        cout<<endl;
        for(int i=0;i<10;i++){
            cout<<ptr1[i]<<" ";
        }
        
    }
    return 0;
}
