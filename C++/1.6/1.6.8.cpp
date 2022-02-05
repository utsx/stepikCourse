#include <bits/stdc++.h>

typedef double ll;

using namespace std;

double pow1(double n, int k)
{
    ll ans = n;
    if(k == 0)
    {
        return 1;
    }
    for(int i = 2; i <= k; i++)
    {
        ans *= n;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    ll x;
    cin >> x;
    vector<ll> arr(n + 1);
    for(int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    if(n == 0)
    {
        cout << arr[0];
        return 0;
    }
    ll ans = 0;
    for(int i = 0; i <= n; i++)
    {
        ans += arr[i] * pow1(x, n - i);
    }
    cout << setprecision(6);
    cout << ans;
}
