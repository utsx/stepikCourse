#include <iostream>

using namespace std;

int main()
{
    int ah, am, as, bh, bm, bs;
    cin >> ah >> am >> as;
    cin >> bh >> bm >> bs;
    cout << (bh * 3600 + bm * 60 + bs) - (ah * 3600 + am * 60 + as);
}
