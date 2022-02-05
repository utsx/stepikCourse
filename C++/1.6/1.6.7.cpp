#include <bits/stdc++.h>

typedef double ll;

using namespace std;

int main()
{
    ll n;
    ll count = 0;
    cin >> n;
    ll sum = 0;
    ll ans = 0;
    while(n != 0)
    {
        count++;
        ans += n * n;
        sum += n;
        cin >> n;
    }
    n = count;
    double f = ans - ((sum * sum) / n);
    double r = sqrt(f / (n - 1));
    cout << fixed << setprecision(11);
    cout << r;

}
