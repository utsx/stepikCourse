#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    if(y > 0)
    {
        if((x + 1) * (x + 1) + (y - 1) * (y - 1) <= 4)
        {
            if(x + y >= 0 && y - 2 * x >= 2)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }
    else
    {
        if((x + 1) * (x + 1) + (y - 1) * (y - 1) >= 4)
        {
            if(x + y <= 0 && y - 2 * x <= 2)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }
}
