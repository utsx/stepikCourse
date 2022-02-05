#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    string this_word = "";
    ll len = 0;
    map<string, ll> m;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ' || i == s.size() - 1)
        {
            if(i == s.size() - 1)
            {
                this_word += s[s.size() - 1];
            }
            m[this_word]++;
            this_word = "";
        }
        else
        {
            this_word += s[i];
        }
    }
    for(auto now : m)
    {
        if(now.first.size() >= ans.size())
        {

            if(now.first.size() == ans.size())
            {
                if(m[ans] < now.second)
                {
                    ans = now.first;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                ans = now.first;
            }

        }
    }
    cout << ans;
}
