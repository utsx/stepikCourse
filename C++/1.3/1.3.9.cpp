#include <iostream>

int main() {
    int a, b, n;
    std::cin >> a >> b >> n;
    std::cout << ((a * 100 + b) * n) / 100 << " " << ((a * 100 + b) * n) % 100;
    return 0;
}