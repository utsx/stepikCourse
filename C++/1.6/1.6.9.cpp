#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll d = (b * b) + (-4 * a * c);
    cout << fixed << setprecision(6);
    if(d == 0)
    {
        cout << (-1 * b) / (2 * a);
    }
    if(d > 0)
    {
        ll x = (-1 * b - sqrt(d)) / (2 * a);
        ll x1 = (-1 * b + sqrt(d)) / (2 * a);
        if(x1 > x)
            cout << x << " " << x1;
        else
             cout << x1 << " " << x;
    }
}
