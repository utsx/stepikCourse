#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    cout << fixed << setprecision(6);
    cout << sqrt(p *(p - a) * (p - b) * (p - c));
}
