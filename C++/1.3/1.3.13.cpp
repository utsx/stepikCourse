#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n / 100;
    int b = (n % 100) / 10;
    int c = (n % 100) % 10;
    int l = b + 10 * c;
    cout << (l - a + 1);
}
