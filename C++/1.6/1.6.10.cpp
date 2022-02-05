#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0)
    {
        cout << 3;
        return 0;
    }
    if(a == 0 && b == 0 && c != 0)
    {
        cout << 0;
        return 0;
    }
    if(a == 0 && b != 0)
    {
        cout << "1 " << ((-1 * c) / b);
        return 0;
    }
    double d = (b * b) + (-4 * a * c);
    if(d > 0)
    {
        ll x = (-1 * b - sqrt(d)) / (2 * a);
        ll x1 = (-1 * b + sqrt(d)) / (2 * a);
        if(x1 > x)
            cout <<"2 " << x << " " << x1;
        else
            cout << "2 " << x1 << " " << x;
        return 0;
    }
    if(d == 0)
    {
        cout << 1 << " ";
        cout << (-1 * b) / (2 * a);

    }
    if(d < 0)
    {
        cout << 0;
        return 0;
    }
    return 0;

}
