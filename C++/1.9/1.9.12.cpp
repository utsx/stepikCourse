#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll find_sum(ll m)
{
    if(m == 1)
    {
        return 1;
    }
    if(m == 2)
    {
        return 1;
    }
    if(m == 3)
    {
        return 2;
    }
    else
    {
        return find_sum(m - 2)+ find_sum(m - 1);
    }
}


int main()
{
ll n;
cin >> n;
cout << find_sum(n);
}
