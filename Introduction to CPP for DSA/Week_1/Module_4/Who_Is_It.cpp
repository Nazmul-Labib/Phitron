#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class Student
{
public:
    int ID;
    char name[101];
    char section;
    int t_marks;
};

int32_t main()
{
    fast_io;
    int t;
    cin >> t;
    // int x = 0;
    while (t--)
    {
        Student best;
        Student s1;
        for (int i = 1; i <= 3; i++)
        {
            cin >> s1.ID >> s1.name >> s1.section >> s1.t_marks;

            if (i == 1)
                best = s1;
            // x++;
            if (s1.t_marks > best.t_marks)
            {
                best = s1;
            }
            else if (s1.t_marks == best.t_marks && s1.ID < best.ID)
            {
                best = s1;
            }
        }
        cout << best.ID << " " << best.name << " " << best.section << " " << best.t_marks << endl;
    }
    return 0;
}