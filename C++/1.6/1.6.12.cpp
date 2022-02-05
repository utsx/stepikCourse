#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if((a*d - c*b) != 0)
    {
        cout << 2 << " " << (e * d - b * f) / (a * d - b * c) << " " << (a * f - c * e) / (a * d - b * c);
    }
    else
    {
        if(!(((e*d-f*b) == 0)&&((a*f-c*e) == 0)))
        {
            cout << 0;
        }
        else
        {
            if((a == 0)&&(b == 0)&&(c == 0)&&(d == 0))
            {
                if((e != 0)||(f!=0))
                {
                    cout << 0;
                }
                else
                {
                    cout << 5;
                }
            }
            else
            {
                if((a ==0) && (c == 0))
                {
                    if(b!=0)
                    {
                        cout << 4 << " " << e/b;
                    }
                    else
                    {
                        cout << 4 << " " << f/d;
                    }
                }
                else
                {
                    if((b == 0)&&(d==0))
                    {
                        if(a!=0)
                        {
                            cout << 3 << " " << e/a;
                        }
                        else
                        {
                            cout << 3 << " " << f/c;
                        }
                    }
                    else
                    {
                        if (b!=0)
                        {
                            cout << 1 << " " << (-a)/b << " " << e/b;
                        }
                        else
                        {
                            cout << 1 << " " << (-c)/d << " " << f/d;
                        }
                    }
                }

            }

        }
    }
    return 0;
}
