#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast_io;
    char str[100001];

    while (true)
    {
        cin.getline(str, 100001);
        int len = strlen(str);
        bool valid = true;

        // Check for invalid characters
        for (int i = 0; i < len; i++)
        {
            char c = str[i];
            if (!( (c >= 'a' && c <= 'z') || c == ' '))
            {
                valid = false;
                break;
            }
        }

        if (!valid)
            break;

        // Sort and print without spaces
        sort(str, str + len);

        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
                cout << str[i];
        }
        cout << '\n';  // new line after each sorted output
    }

    return 0;
}
