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
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        for (int i = 0; i <= (int)(str1.length() - str2.length()); i++)
        {
            int x = 0, c = 0;
            for (int j = 0; j < str2.length(); j++)
            {
                if (str1[i + x++] == str2[j])
                {
                    c++;
                }
            }
            if (c == str2.length())
            {
                str1.replace(i, str2.length(), "#");
            }
            c = 0;
            x = 0;
        }
        cout << str1 << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define pb push_back
// #define pob pop_back
// #define all(x) (x).begin(), (x).end()
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// int32_t main()
// {
//     fast_io;
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         string str1, str2;
//         cin >> str1 >> str2;
//         int len1 = str1.length();
//         int len2 = str2.length();

//         for (int i = 0; i <= (int)(str1.length() - str2.length()); i++)
//         {
//             int x = 0, c = 0;
//             for (int j = 0; j < len2; j++)
//             {
//                 if (str1[i + x++] == str2[j])
//                 {
//                     c++;
//                 }
//             }
//             if (c == len2)
//             {
//                 str1.replace(i, len2, "#");
//                 // i += 0; 
//             }
//         }
//         cout << str1 << endl;
//     }
//     return 0;
// }
