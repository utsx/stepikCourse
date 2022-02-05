#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    map<string, string> m;
    map<string, string> reverse_m;
    for(ll i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        m[x] = y;
        reverse_m[y] = x;
    }
    string request;
    cin >> request;
    if(m[request] == "")
    {
        cout << reverse_m[request];
    }
    else
    {
        cout << m[request];
    }

}

