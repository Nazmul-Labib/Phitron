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
    while (t--)
    {
        char str[100] = "hello";
        // str="gello"; direct evabe change kora jabe na char array te
        strcpy(str, "gello"); // evabe copy kore onno string boshate hoy
        cout << str << endl;

        string str2 = "Hello";
        str2 = "gello"; // string data type k evabe content change kora jay
        cout << str2 << endl;

        char str3[100] = "gello";

        if (strcmp(str, str3) == 0)
        {
            cout << "Equal\n";
            // compare korte strcmp function lage
        }
        string str4 = "hello";
        if (str2 == str4)
        {
            // direct compare kora jay
            cout << "Same" << endl;
        }

        //string datatype diye easily overwrite kora jay 
        str2="hello my name is labib";
        cout<<str2<<endl;
    }
    return 0;
}