#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(6);
    cout << trunc((n - trunc(n)) * 10);
}
