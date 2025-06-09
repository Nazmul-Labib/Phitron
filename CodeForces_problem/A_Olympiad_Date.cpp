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
//         int n;
//         cin >> n;
//         int arr[n];
//         int freq[10] = {0};
//         for (int i = 0; i < n; i++)
//         {
//             cin >> *(arr + i);
//             freq[arr[i] - 0]++;
//         }

//         int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c5 = 0, count = 0;

//         if (freq[0] < 3 || freq[1] < 1 || freq[2] < 2 || freq[3] < 1 || freq[5] < 1)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         else
//         {

//             for (int i = 0; i < n; i++)
//             {
//                 if (arr[i] == 0)
//                 {
//                     c0++;
//                 }
//                 if (arr[i] == 1)
//                 {
//                     c1++;
//                 }
//                 if (arr[i] == 2)
//                 {
//                     c2++;
//                 }
//                 if (arr[i] == 3)
//                 {
//                     c3++;
//                 }
//                 if (arr[i] == 5)
//                 {
//                     c5++;
//                 }
//                 count++;
//                 if (c0 >= 3 && c1 >= 1 && c2 >= 2 && c3 >= 1 && c5 >= 1)
//                 {
//                     cout << count << endl;
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }


// .........|...............................
// chatgpt :V
// ----------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;

        int arr[n]; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        
        int required[10] = {0};
        required[0] = 3;
        required[1] = 1;
        required[2] = 2;
        required[3] = 1;
        required[5] = 1;

        int freq[10] = {0};
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int d = arr[i];
            freq[d]++;
            bool ok = true;
            for (int j = 0; j <= 9; j++) {
                if (freq[j] < required[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
