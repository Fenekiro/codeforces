#include <iostream>

long long xorinacci(int n, long long a, long long b) {
    if (n % 3 == 0) {
        return a;
    } else if (n % 3 == 1) {
        return b;
    } else {
        return a ^ b;
    }
}

int main_xorinacci() {
    int t;

    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b, n;

        std::cin >> a >> b >> n;

        std::cout << xorinacci(n, a, b) << "\n";
    }

    return 0;

}