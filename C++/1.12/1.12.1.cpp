#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}



