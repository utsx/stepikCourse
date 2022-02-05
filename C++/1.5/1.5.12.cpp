#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0, numb = n, count1 = 1;
    while(n != 0)
    {
        cin >> n;
        if(n == numb)
        {
            count1++;
        }
        else
        {
            ans = max(ans, count1);
            count1 = 1;
            numb = n;
        }
    }
    cout << ans;
    return 0;
}
