#include <iostream>

int main_2_power() {
    int n;

    std::cin >> n;

    if (n == 0) {
        std::cout << 1;
    } else {
        std::cout << (2ull << (n - 1));
    }

    return 0;
}