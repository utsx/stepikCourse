#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    ll count = 1;
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= m; j++)
        {
            if(i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0)
            {
                arr[i][j] = count;
                count++;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= m; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << "\n";
    }
}
