#include <bits/stdc++.h>

using namespace std;

int main()
{
    int max1 = 0;
    int max2 = 0;
    int x = -1;
    while(x != 0)
    {
        if(x > max1)
        {
            if(max1 != 0)
            {
                max2 = max1;
            }
            max1 = x;
        }
        else if (x > max2)
        {
            max2 = x;
        }
        cin >> x;
    }
    cout << max2;
}
