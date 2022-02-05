#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    ll count = 1;
    for(ll i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(ll j = 0; j < m; j++)
            {
                arr[i][j] = count;
                count++;
            }
        }
        else
        {
            for(ll j = m - 1; j >= 0; j--)
            {
                arr[i][j] = count;
                count++;
            }
        }
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << "\n";
    }
}

