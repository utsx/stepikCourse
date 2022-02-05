#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

class stl
{
public:
    string s;
    double mid;
};

int middle(vector<ll> arr)
{
    ll sum = 0;
    for(ll i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool cmp(stl n, stl m)
{
    return n.mid > m.mid;
}

int main()
{
    int n;
    cin >> n;
    vector<stl> arr(n);
    for(ll i = 0; i < n; i++)
    {
        string s;
        string s1;
        cin >> s >> s1;
        arr[i].s = s + " " + s1;
        vector<ll> arr1;
        for(ll j = 0; j < 3; j++)
        {
            ll x;
            cin >> x;
            arr1.push_back(x);
        }
        arr[i].mid = middle(arr1);
    }
    stable_sort(arr.begin(), arr.end(), cmp);
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i].s << "\n";
    }
}
