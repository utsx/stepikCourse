#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
       if(i % 2 == 0)
       {
           cout << arr[i] << " ";
       }
   }
}
