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
    class Student
    {
    public:
        string name;
        int roll;
        char section;
        int math_marks;
        int cls;
        Student(string name, int roll, char section, int math_marks, int cls)
        {
            this->name = name;
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        }
    };
    while (t--)
    {
        Student student1("Nazmul Labib", 220236, 'A', 90, 10);
        Student student2("Humayera Hossain Hia", 220209, 'A', 100, 10);
        Student student3("Sajjat Hossain", 220237, 'A', 98, 10);

        cout << "Student1 details:" << endl
             << "---------------" << endl
             << student1.name << endl
             << student1.roll << endl
             << student1.section << endl
             << student1.math_marks << endl
             << student1.cls << endl
             << endl;
        cout << "Student2 details:" << endl
             << "---------------" << endl
             << student2.name << endl
             << student2.roll << endl
             << student2.section << endl
             << student2.math_marks << endl
             << student2.cls << endl
             << endl;
        cout << "Student3 details:" << endl
             << "---------------" << endl
             << student3.name << endl
             << student3.roll << endl
             << student3.section << endl
             << student3.math_marks << endl
             << student3.cls << endl;

        int max_mark = max({student1.math_marks, student2.math_marks, student3.math_marks});

        cout << "Top scorer(s):\n";
        if (student1.math_marks == max_mark)
            cout << student1.name << " with " << student1.math_marks << " marks\n";
        if (student2.math_marks == max_mark)
            cout << student2.name << " with " << student2.math_marks << " marks\n";
        if (student3.math_marks == max_mark)
            cout << student3.name << " with " << student3.math_marks << " marks\n";
    }

return 0;
}
