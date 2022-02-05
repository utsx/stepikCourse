#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n;
    while(n != 0)
    {
        cin >> n;
        sum = max(sum, n);
    }
    cout << sum;

}

