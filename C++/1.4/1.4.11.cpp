#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if(k % m == 0 && k <= n * m || k % n == 0 && k <= n * m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
