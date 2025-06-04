#include <bits/stdc++.h>
#include <iomanip>
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
        int day;
        cin >> day;
        switch (day)
        {
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        case 3:
            cout << "Monday";
            break;
        case 4:
            cout << "Tuesday";
            break;
        case 5:
            cout << "Wednesday";
            break;
        case 6:
            cout << "Thursday";
            break;
        case 7:
            cout << "Friday";
            break;
        default:
            cout << "Enter between 1 to 7";
        }
    }
    return 0;
}