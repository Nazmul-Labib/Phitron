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
    int math_marks, eng_marks;
};
bool cmp(Student lft, Student rgt)
{
    if (lft.eng_marks == rgt.eng_marks)
    {
        if (lft.math_marks == rgt.math_marks)
        {
            return lft.id < rgt.id;
        }
        else
        {
            return lft.math_marks > rgt.math_marks;
        }
    }
    else
    {
        return lft.eng_marks > rgt.eng_marks;
    }
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
            cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
        }
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
        }
    }
    return 0;
}