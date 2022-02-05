#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

double power_plus(double a, ll n)
{
    if(n == 1)
    {
        return a;
    }
    else
    {
        if(n % 2 == 0)
        {
        return power_plus(a * a, n / 2);
        }
        else
        {
            return a * power_plus(a, n - 1);
        }
    }
}


int main()
{
    double a;
    ll n;
    cin >> a >> n;
    if(n == 0)
    {
        cout << 1;
        return 0;
    }
    if(n > 0)
    {
        cout << power_plus(a, n);
    }
    else
    {
        cout << 1 / power_plus(a, -1 * n);
    }
}
