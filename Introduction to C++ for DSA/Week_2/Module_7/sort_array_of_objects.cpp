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
    // int cls;
    int roll;
    int marks;
};
bool cmp(Student l, Student r)
{
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }

    // else if (l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //    return l.roll<r.roll;
    // }
    //---------------------------
    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else
    // {
    //     return l.marks > r.marks;
    // }
    //----------------------------------
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
    //---------------------------

    // return l.marks<=r.marks;  eivabe korleo same o/p ashbe
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
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks<<endl;
        // }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
        }
    }
    return 0;
}