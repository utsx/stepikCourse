#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    double count = 0;
    while(n != 0)
    {
        sum += n;
        count += 1.0000;
        cin >> n;
    }
    cout << fixed << setprecision(11);
    cout << sum / count;

}
