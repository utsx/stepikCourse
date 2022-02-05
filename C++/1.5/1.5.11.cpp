#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int next_numb = 1;
    int previous_numb = 0;
    int ans = 1;
    int sum = 0;
    while(sum <= n)
    {
        if(sum == n)
        {
            cout << ans;
            return 0;
        }
        sum = previous_numb + next_numb;
        previous_numb = next_numb;
        next_numb = sum;
        ans++;
    }
    cout << -1;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int next_numb = 1;
    int previous_numb = 0;
    int ans = 1;
    int sum = 0;
    while(sum <= n)
    {
        if(sum == n)
        {
            cout << ans;
            return 0;
        }
        sum = previous_numb + next_numb;
        previous_numb = next_numb;
        next_numb = sum;
        ans++;
    }
    cout << -1;
    return 0;
}
