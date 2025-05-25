#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fios(); ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solution();

int main()
{
    int t = 1;
    fios();
    //cin >> t;
    while(t--)
        solution();
}
void solution()
{
    int n; cin >> n;
    string s; cin >> s;
    for(char i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == s[j]) cout << i;
        }
    }
    //cout << s<<'\n';
}