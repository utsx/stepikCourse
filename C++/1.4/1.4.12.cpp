#include <iostream>

using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int new_n = min(n, m);
    int new_m = max(n, m);
    int short_dist_long = min(x, new_n - x);
    int short_dist_short = min(y, new_m - y);
    cout << min(short_dist_long, short_dist_short);
}
