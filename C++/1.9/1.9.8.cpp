#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int MinDivision(ll n)
{
    ll ans = 0;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
   ll n;
   cin >> n;
   if(MinDivision(n) == 0)
   {
       cout << n;
   }
   else
   {
       cout << MinDivision(n);
   }
}
