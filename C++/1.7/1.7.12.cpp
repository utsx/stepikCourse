#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    ll ans = 0;
    ll maxel = 0;
    for(ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        maxel = max(maxel, x);
        arr.push_back(x);
    }
    vector<ll> count1(maxel + 2);
    for(ll i = 0; i < maxel + 2; i++)
    {
        count1[i] = 0;
    }
    for(ll i = 0; i < n; i++)
    {
     count1[arr[i]]++;
    }
    for(ll i = 0; i < n; i++)
    {
        if(count1[arr[i]] == 1)
        {
            cout << arr[i] << " ";
        }
    }

}
