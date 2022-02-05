#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    ll ans = 0;
    for(ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    vector<ll> count1(arr[n - 1] + 2);
    for(ll i = 0; i < arr[n - 1] + 2; i++)
    {
        count1[i] = 0;
    }
    for(ll i = 0; i < n; i++)
    {
     count1[arr[i]]++;
    }
    for(ll i = 0; i <= arr[n - 1]; i++)
    {
        ans += (count1[i] * (count1[i] - 1)) / 2;
    }
    cout << ans;
}
