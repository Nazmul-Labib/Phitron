#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

class Student{
    public:
    string name;
    int roll;
    int math_marks;
    int english_marks;
    Student(string name, int roll, int math_marks, int english_marks){
           this->name=name;
           this->roll=roll;
           this->math_marks=math_marks;
           this->english_marks=english_marks;
           
    }
    void total_marks(){
        cout<<name<<" gets total "<<math_marks+english_marks<<endl;
    }

};

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
        Student Hia("Humayera Hossain Hia",01,99,100);
        Hia.total_marks();
        // cout<<Hia.name<<endl;
        Student Labib("Md. Nazmul Huda Labib",220236,100,90);
        Labib.total_marks();
        
        
    }
    return 0;
}