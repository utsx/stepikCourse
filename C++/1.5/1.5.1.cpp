#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        if(n % i == 0)
        {
            cout << i;
            return 0;
        }
        i += 1;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i * i <= n)
    {
        cout << i << " ";
        i += 1;
    }
}
