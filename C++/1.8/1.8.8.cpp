#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll ans = 0;
    ll k;
    cin >> k;
    for(ll i = 0; i < n; i++)
    {
        ll count = 0;
        for(ll j = 0; j < m; j++)
        {
            if(arr[i][j] == 1 || j == m - 1)
            {
                if(j == m - 1 && arr[i][j] == 0)
                {
                    count++;
                }
                if(k <= count)
                {
                    cout << i + 1;
                    return 0;
                }
                count = 0;
            }
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout << 0;
}
