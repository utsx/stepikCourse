#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    string s;
    cin >> s;
    ll count = 0;
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] == s[s.size() - i - 1])
            count++;
    }
    if(count == s.size() / 2)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
