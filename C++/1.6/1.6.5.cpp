#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll p, x, y;
    int k;
    cin >> p >> x >> y >> k;
    ll d = 100 * x + y;
    ll dt = 1;
    ll sum = d;
    while(k > 0)
    {
        sum = trunc(sum * ((100 + p) / 100));
        k--;
    }
    ll rub = trunc((sum / 100) + 0.000000001);
    ll kp = trunc((sum - rub * 100) + 0.000000001);
    cout << rub << " " << kp;
}
