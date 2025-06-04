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
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls;//this is a pointer
        this->gpa = gpa;
    }
};
int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Student hia(220236, 10, 4.34);
        // hia.roll = 220236;
        // hia.cls = 10;
        // hia.gpa = 4.34;

        cout << "Hia details:" << endl
             << hia.roll << endl
             << hia.cls << endl
             << hia.gpa << endl;

        Student karim(02, 10, 5.00);
        // karim.roll = 02;
        // karim.cls = 10;
        // karim.gpa = 5.00;

        cout << "Karim details:" << endl
             << karim.roll << endl
             << karim.cls << endl
             << karim.gpa << endl;
        int r, c;
        double g;
        cin >> r >> c >> g;
        Student labib(r, c, g);

        cout << "labib details:" << endl
             << labib.roll << endl
             << labib.cls << endl
             << labib.gpa << endl;
        }
    return 0;
}