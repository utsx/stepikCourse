#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

class stl
{
public:
    double dist;
    int a;
    int b;

public:
    double distance()
    {
        return sqrt(a * a + b * b);
    }
};

bool cmp(stl n, stl m)
{
    return n.dist < m.dist;
}

int main()
{
    int n;
    cin >> n;
    vector<stl> arr(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i].a >> arr[i].b;
        arr[i].dist = arr[i].distance();
    }
    sort(arr.begin(), arr.end(), cmp);
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i].a << " " << arr[i].b << "\n";
    }
}
