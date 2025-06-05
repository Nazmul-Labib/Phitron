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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *ptr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ptr[i];
        }

        int minVal = *min_element(ptr, ptr + n);

        // Count how many elements are not equal to min
        int newSize = 0;
        for (int i = 0; i < n; i++)
        {
            if (ptr[i] != minVal)
                newSize++;
        }

        // If all elements are min, handle separately
        if (newSize == 0)
        {
            cout << "All elements are equal\n";
            delete[] ptr;
            continue;
        }

        int *ptr2 = new int[newSize];
        for (int i = 0, j = 0; i < n; i++)
        {
            if (ptr[i] != minVal)
            {
                ptr2[j++] = ptr[i];
            }
        }

        delete[] ptr;  // free original memory
        ptr = ptr2;

        cout << minVal+(*min_element(ptr, ptr + newSize)) << "\n";

        delete[] ptr;  // free the updated memory
        
    }
    return 0;
}
