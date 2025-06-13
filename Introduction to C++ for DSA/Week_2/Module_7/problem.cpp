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
    string name;
    int roll;
    int marks;
};
bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll > r.roll : l.marks < r.marks;
}

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
            cin.ignore();
            getline(cin, arr[i].name);
            cin >> arr[i].roll >> arr[i].marks;
        }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
        }
    }
    return 0;
}