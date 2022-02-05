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
    int i1, j1;
    cin >> i1 >> j1;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(j == i1)
            {
                cout << arr[i][j1] << " ";
            }
            else if(j == j1)
            {
                cout << arr[i][i1] << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
}
