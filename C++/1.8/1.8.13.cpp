#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    int arr[n][m];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            arr[i][j] = 0;
        }
    }
    ll k = 1;
    ll count = 0;
    while(k <= n * m)
    {
        for(ll j = 0; j < m; j++)
        {
            if(arr[count][j] == 0)
            {
                arr[count][j] = k;
                k++;
            }
        }
        for(ll j = 0; j < n; j++)
        {
            if(arr[j][m - 1 -count] == 0)
            {
                arr[j][m - 1 - count] = k;
                k++;
            }
        }
        for(ll j = m - 1; j >= 0; j--)
        {
            if(arr[n - 1 - count][j] == 0)
            {
                arr[n - 1 - count][j] = k;
                k++;
            }
        }
        for(ll j = n - 1; j >= 0; j--)
        {
            if(arr[j][count] == 0)
            {
                arr[j][count] = k;
                k++;
            }
        }
        count++;
    }
    cout<<" ";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            std::cout.width(4);
            std::cout << arr[i-1][j-1];
        }
        cout<<endl;
    }
}
