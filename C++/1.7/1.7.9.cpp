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
    if(n % 2 == 1)
    {
        for(ll i = 0; i < n - 1; i += 2)
        {
            int b = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = b;
        }
    }
    else
    {
        for(ll i = 0; i < n; i += 2)
        {
            int b = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = b;
        }
    }
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
