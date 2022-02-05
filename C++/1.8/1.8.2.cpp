#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    char arr[n][n];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            arr[i][j] = '.';
        }
    }
    for(ll i = 0; i < n; i++)
    {
        arr[n / 2][i] = '*';
        arr[i][n / 2] = '*';
        arr[i][i] = '*';
        arr[i][n - i - 1] = '*';
    }for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}
