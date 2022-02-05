#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    double x, y, x1, y1, r;
    cin >> x >> y >> x1 >> y1 >> r;
    double dist = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    if(dist <=  r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
