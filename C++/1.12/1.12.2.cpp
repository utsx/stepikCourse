#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<ll> arr(m);
    for(ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    sort(arr.begin(), arr.end());
    for(ll i = 0; i < m; i++)
    {
        ll count = 0;
        ll this1 = n;
        for(ll j = 0; j < m; j++)
        {
            if(arr[j] >= this1)
            {
                count++;
                this1 = arr[j] + 3;
            }
        }
        ans = max(ans, count);
    }
    cout << ans;

}
