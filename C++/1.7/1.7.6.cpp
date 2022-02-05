#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   int ans = 10000000000;
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   for(int i = 0; i < n; i++)
   {
       if(arr[i] > 0)
       {
           ans = min(ans, arr[i]);
       }
   }
   cout << ans;
}
