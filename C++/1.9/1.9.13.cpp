#include <iostream>

using namespace std;

int n;

int ans(int m)
{
    if(((m + m * m) / 2) >= (n - 1))
    {
        return m;
    }
    else
    {
        ans(m + 1);
    }
}

int main()
{
    cin >> n;
    cout << ans(1);
}
