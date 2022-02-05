#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<string> word;

void words(string s)
{
    string new_word = "";
    for(ll i = 0; i < s.size(); i++)
    {
        if(!isalpha(s[i]) || i == s.size() - 1)
        {
            if(i == s.size() - 1)
            {
                new_word += s[s.size() - 1];
            }
            word.push_back(new_word);
            new_word = "";
        }
        else
        {
            new_word += s[i];
        }
    }
}

int main()
{
   ll n;
   cin >> n;
   set<string> arr;
   set<string> lower_word;
   for(ll i = 0; i < n; i++)
   {
       string x;
       cin >> x;
       arr.insert(x);
       string lowerword = "";
       for(auto j : x)
       {
           lowerword += tolower(j);
       }
       lower_word.insert(lowerword);
   }
   string s;
   getline(cin, s);
   getline(cin, s);
   words(s);
   ll ans = 0;
   for(auto i : word)
   {
       string lowerword = "";
       for(auto j : i)
       {
           lowerword += tolower(j);
       }
       if(lower_word.find(lowerword) == lower_word.end())
       {
           ll count = 0;
           for(auto j : i)
           {
               if(j >= 'A' && j <= 'Z')
               {
                   count++;
               }
           }
           if(count >= 2 || count == 0)
           {
               ans++;
           }
       }
       else
       {
           if(arr.find(i) == arr.end())
           {
               ans++;
           }
       }
   }
   cout << ans;
   return 0;
}
