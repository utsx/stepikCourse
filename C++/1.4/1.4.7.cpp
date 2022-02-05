#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(a - c) <= 1 && abs(b - d) <= 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
