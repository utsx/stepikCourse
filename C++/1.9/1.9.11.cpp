#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll find_sum(ll n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        ll x;
        cin >> x;
        return n + find_sum(x);
    }
}


int main()
{
ll n;
cin >> n;
cout << find_sum(n);
}
