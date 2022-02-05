#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

map<string, vector<string>> dictionary;

void translate(string s)
{
    string english_word = "";
    string word = "";
    vector<string> latin_words;
    bool c = 0;
    for(ll i = 0; i < s.size(); i++)
    {
        if(c == false)
        {
            if(s[i] == '-')
            {
                english_word = word;
                c = true;
                word = "";
                continue;
            }
            if(s[i] != '-' && isalpha(s[i]))
            {
                word += s[i];
            }
        }
        if(c == true)
        {
            if(s[i] == ',' || i == s.size() - 1)
            {
                if(i == s.size() - 1)
                {
                    word += s[i];
                }
                latin_words.push_back(word);
                word = "";
            }
            else if (isalpha(s[i]))
            {
                word += s[i];
            }
        }
    }
    for(auto i : latin_words)
    {
        dictionary[english_word].push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string h;
    ll n;
    cin >> n;
    getline(cin, h);
    for(ll i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        translate(s);
    }
    map<string, vector<string>> m;
    for(auto i : dictionary)
    {
        for(auto j : i.second)
        {
            m[j].push_back(i.first);
        }

    }
    cout << m.size() << "\n";
    for(auto i : m)
    {
        cout << i.first << " - ";
        for(ll j = 0; j < i.second.size() - 1; j++)
        {
            for(auto g : i.second[j])
            {
                if(g != ' ')
                    cout << g;
            }
            cout << ", ";
        }
        cout << i.second[i.second.size() - 1];
        cout << "\n";
    }

}
