#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<char> arr(n, 'I');
    for(ll i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        for(ll i = 0; i < n; i++)
        {
            if(i >= l && i <= r)
                arr[i] = '.';
        }
    }
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i];
    }

}
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<char> arr(n, 'I');
    for(ll i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        for(ll i = 0; i < n; i++)
        {
            if(i >= l && i <= r)
                arr[i] = '.';
        }
    }
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i];
    }

}
