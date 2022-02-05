#include <iostream>

using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    if(n <= m && n <= x)
    {
        cout << n;
        cout << " ";
        if(x < m)
            cout << x << " " << m;
        else
            cout << m << " " << x;
        return 0;

    }
    if(m <= n && m <= x)
    {
        cout << m;
        cout << " ";
        if(x < n)
            cout << x << " " << n;
        else
            cout << n << " " << x;
        return 0;
    }
    cout << x;
    cout << " ";
    if(n < m)
        cout << n << " " << m;
    else
        cout << m << " " << n;
    return 0;
}

