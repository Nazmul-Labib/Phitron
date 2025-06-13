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
//     // cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;
//         for (int i = 0; i < str.size(); i++)
//         {
//             if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
//             {
//                 str.replace(i, 5, " ");
//             }
//         }
//         cout << str;
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>

// int main() {
//     std::string s;
//     std::getline(std::cin, s);  // read whole line

//     std::string target = "EGYPT";
//     size_t pos;

//     while ((pos = s.find(target)) != std::string::npos) {
//         s.replace(pos, target.length(), " ");
//     }

//     std::cout << s << std::endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--) {
        string str;
        cin>>str;
        string target="EGYPT";
        size_t pos;
        
        while((pos=str.find(target))!= string :: npos){
             str.replace(pos,target.length()," ");
        }
        cout<<str;


    }
    return 0;
}




