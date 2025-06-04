#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
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
        string s1 = "Hello", s2 = " World";
        s1 += s2; // we can add two strings in this way
        cout << s1 << endl;
        string s3 = " also universe";
        s1.append(s3); // it also works to combine two strings
        cout << s1 << endl;
        s1.pb('A'); // it adds a character at the end of a string
        cout << s1 << endl;
        s1 += 'U';
        cout << s1 << endl;
        s1.pob();
        cout << s1 << endl;

        s2 = "Labib";
        s1 = s2; // we can use equal sign to copy
        cout << s1 << endl;
        s2 = "Humayera";

        s1.assign(s2); // is it also used to copy
        cout << s1 << endl;
        s1 = "Hello World";
        s1.erase(5); // string will be removed from given index
        cout << s1 << endl;
        s1 = "Hello World";
        s1.erase(3, 5); // 5 characters will be removed from index 3
        cout << s1 << endl;
        s1 = "Hello World";
        s1.replace(6, 5, "bangladesh"); // give the index where you want to change then give the number of how many characters you want to remove then put the string
        cout << s1 << endl;
        s1 = "Hello World";
        s1.insert(5," hia");
        cout<<s1<<endl;


    }
    return 0;
}