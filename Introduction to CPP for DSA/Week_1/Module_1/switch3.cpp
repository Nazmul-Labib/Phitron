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
        char ch;
        cin >> ch;
        switch (ch)
        {
        case 'a':
            cout << "Vowel";
        case 'e':
            cout << "Vowel";
        case 'i':
            cout << "Vowel";
        case 'o':
            cout << "Vowel";
        case 'u':
            cout << "Vowel";
        default:
            cout << "Consonant";
        }
    }
    return 0;
}