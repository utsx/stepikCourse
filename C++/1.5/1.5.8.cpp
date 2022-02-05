#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n;
    int i = 1;
    while(n != 0)
    {
        cin >> n;
        if(n > sum)
        {
            i = 1;
            sum = n;
        }
        else if(n == sum)
        {
            i++;
        }

    }
    cout << i;

}
