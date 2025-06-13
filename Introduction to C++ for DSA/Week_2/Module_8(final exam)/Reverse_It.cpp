#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Student arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
        }
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i].s, arr[n - 1 - i].s);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
        }
    }
    return 0;
}