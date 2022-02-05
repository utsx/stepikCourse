#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, b2 , c , d , i , j , S , v , v1;
    cin >> a >> b ;
    S = abs(a)*b;
    v = S % 109;
    if ( v == 0)
    {
        cout<< " 0 ";
        return 0 ;
    }
    if (a < 0)
    {
        v1 = 109 - ( S % 109 );
        cout << v1;
        return 0 ;
    }
    else
    {
        v1 = S % 109;
        cout << v1;
        return 0 ;
    }
}