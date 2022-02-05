#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    ll ans = 1;
    for(auto i : s)
    {
        if(i == ' ')
        {
            ans++;
        }
    }
    cout << ans;
}
