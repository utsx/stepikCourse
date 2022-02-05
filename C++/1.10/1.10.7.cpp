#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i, j;
    for (i = 0; i < 4; ++i)
    {
        string s;

        getline(cin, s, i < 3 ? '.' : '\n');

        int l = s.length();
        if (l < 1 || l > 3) break;

        for (j = 0; j < l && '0' <= s[j] && s[j] <= '9'; ++j);
        if (j < l || atoi(s.c_str()) > 255) break;
    }
    if (i < 4 ? 0 : 1 == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

