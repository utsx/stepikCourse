#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int long_every_day = a - b;
    n -= a;
    cout << ((n +long_every_day - 1) / long_every_day) + 1;
}
