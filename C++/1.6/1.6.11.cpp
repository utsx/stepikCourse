#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (e * d - b * f) / (a * d - b * c) << " " << (a * f - c * e) / (a * d - b * c);
}
