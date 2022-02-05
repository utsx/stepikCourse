#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n = 8;
    vector<pair<ll, ll>> arr;
    ll x, y;
    cin >> x >> y;
    arr.push_back(make_pair(x, y));
    for(ll i = 1; i < n; i++)
    {
        cin >> x >> y;
        for(ll j = 0; j < arr.size(); j++)
        {
            if(x == arr[j].first || y == arr[j].second || abs(x - arr[j].first) == abs(y - arr[j].second))
               {
                   cout << "YES";
                   return 0;
               }
        }
        arr.push_back(make_pair(x, y));
    }
    cout << "NO";
}