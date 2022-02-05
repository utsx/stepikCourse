#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
   ll n;
   cin >> n;
   vector<ll> arr(n);
   ll ans = 0;
   for(ll i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   for(ll i = 0; i < n; i++)
   {
       if(ans == 0 && arr[i] % 2 != 0)
       {
           ans = arr[i];
       }
       if(arr[i] % 2 != 0)
       {
           ans = min(ans, arr[i]);
       }
   }
   if(ans == 0)
       cout << 0;
   else
       cout << ans;
}
