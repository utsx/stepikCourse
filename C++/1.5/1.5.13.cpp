#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int ans = 0;
    int previous = n, this1 = 0, next = 0;
    while(n != 0)
    {
        if (this1 == 0)
        {
            this1 = n;
        }
        if(next == 0)
        {
            next = n;
        }
        if(this1 > next && this1 > previous && this1 != 0 && next != 0)
        {
            //cout << previous << " " << this1 << " " << next << "\n";
            ans++;
        }
        cin >> n;
        previous = this1;
        this1 = next;
        next = n;
    }
    cout << ans;
}
