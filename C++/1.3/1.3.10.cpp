#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int h = n / 3600;
    int mm = (n - h * 3600) / 60;
    int ss = (n - h * 3600 - mm * 60);
    printf("%01d:%02d:%02d", h % 24, mm % 60, ss);
    return 0;
}
