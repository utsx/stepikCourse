#include <bits/stdc++.h>

typedef long long ll;

struct mini
{
    double a;
    double b;
    double c;
    double d;
};

mini n;

double dist()
{
    double x = (n.c - n.a) * (n.c - n.a);
    double y = (n.d - n.b) * (n.d - n.b);
    return x + y;
}

using namespace std;

int main()
{

    cin >> n.a >> n.b >> n.c >> n.d;
    cout << fixed << setprecision(4);
    cout << sqrt(dist());
}

