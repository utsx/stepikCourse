#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                if(arr[i][j] != arr[j][i])
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}
