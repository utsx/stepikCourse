#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    ll maxnumb = numeric_limits<int>::min();
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            maxnumb = max(maxnumb, arr[i][j]);
        }
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(arr[i][j] == maxnumb)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }

}

