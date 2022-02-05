#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n][n];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> k;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            if(i - j == k)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}
