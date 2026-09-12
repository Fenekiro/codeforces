#include <iostream>

int main_get_bit() {
    long long a;
    unsigned int i;

    std::cin >> a >> i;

    std::cout << ((a >> i) & 1);

    return 0;
}