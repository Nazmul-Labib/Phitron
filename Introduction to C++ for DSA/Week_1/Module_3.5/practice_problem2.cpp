#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class Cricketer
{
public:
    int jersey_no;
    string country;
};

int32_t main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Cricketer *Dhoni = new Cricketer;
        Dhoni->jersey_no = 7;
        Dhoni->country = "India";
        Cricketer *Kohli = new Cricketer;
        //*Kohli=*Dhoni; in this way there will be no error after deleting Dhoni
        //Kohli = Dhoni; in this way, this will produce garbage value because the address is pointed by Kohli is deleted
        Kohli->jersey_no = Dhoni->jersey_no;
        Kohli->country = Dhoni->country;

        delete Dhoni;
        cout << Kohli->jersey_no << endl
             << Kohli->country; 
    }
    return 0;
}
