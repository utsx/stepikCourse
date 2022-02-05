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
        if(s.find(x) == s.end())
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << "\n";
        s.insert(x);
    }
}



