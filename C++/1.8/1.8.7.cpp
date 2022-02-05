#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
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
    for(ll i = 0; i < m; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}
