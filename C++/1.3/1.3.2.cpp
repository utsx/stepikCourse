#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::cout << k - (n * (k / n));
    return 0;
}