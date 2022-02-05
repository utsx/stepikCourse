#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    ll count = 1;
    for(ll c = 0; c < m + n - 1; c++)
    {
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                if(i == c - j || j == c - i)
                {
                    arr[i][j] = count;
                    count++;
                }
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
