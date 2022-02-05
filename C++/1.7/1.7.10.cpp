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
    int a = arr[n - 1];
    cout << a << " ";
    for(ll i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
