#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll p, x, y;
    cin >> p >> x >> y;
    ll d = 100 * x + y;
    double sum = d * (1 + p / 100);
    ll rub = trunc((sum / 100) + 0.000000001);
    ll kp = trunc((sum - rub * 100) + 0.000000001);
    cout << rub << " " << kp;
}
