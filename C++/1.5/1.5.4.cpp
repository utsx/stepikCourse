#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    if((n & (n - 1)) == 0)
        cout << "YES";
    else
        cout << "NO";
}
