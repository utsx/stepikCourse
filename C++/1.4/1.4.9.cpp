#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> b >> a >> d >> c;
    if(abs(a - c) == abs(b - d) || a == c || d == b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
