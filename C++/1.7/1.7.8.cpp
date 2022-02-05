#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
   ll n;
   cin >> n;
   set<ll> s;
   for(ll i = 0; i < n; i++)
   {
       int x;
       cin >> x;
       s.insert(x);
   }
   cout << s.size();
}
