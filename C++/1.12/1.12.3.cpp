#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if(a.first >= b.first)
    {
        if(a.first == b.first)
        {
            return a.second > b.second;
        }
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.end(), cmp);
    for(ll i = n - 1; i>= 0; i--)
    {
        cout << arr[i].second << " " << arr[i].first << "\n";
    }

}
