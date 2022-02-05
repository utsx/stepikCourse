#include <bits/stdc++.h>

typedef long long ll;

struct mini
{
    int a;
    int b;
    int c;
    int d;
};

using namespace std;

int main()
{
    mini n;
    cin >> n.a >> n.b >> n.c >> n.d;
    cout << min(n.a, min(n.b, min(n.c, n.d)));
}

