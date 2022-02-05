#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 0;
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if(s.find(x) != s.end())
        {
            ans++;
        }
    }
    cout << ans;

}

