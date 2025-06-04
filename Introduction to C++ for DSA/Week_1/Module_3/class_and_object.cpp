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
    char name[50];
    int roll;
    double gpa;
};

int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Student hia, labib;
        cin.getline(hia.name, 50);
        cin >> hia.roll >> hia.gpa;

        cout << fixed << hia.name << endl
             << hia.roll << endl
             << setprecision(2) << hia.gpa << endl;

        cin.ignore();

        cin.getline(labib.name, 50);
        cin >> labib.roll >> labib.gpa;
        
        cout << fixed << labib.name << endl
             << labib.roll << endl
             << setprecision(2) << labib.gpa << endl;
    }
    return 0;
}