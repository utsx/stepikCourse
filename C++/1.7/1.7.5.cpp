#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   int ans = 0;
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
   for(int i = 1; i < n; i++)
   {
       if(arr[i - 1] < 0 && arr[i] < 0 || arr[i - 1] > 0 && arr[i] > 0)
       {
           cout << min(arr[i - 1], arr[i]) << " " << max(arr[i], arr[i - 1]);
           return 0;
       }
   }
}
