#include <iostream>

int main_invert_bit() {
    long long a;
    unsigned int i;
    long long inverter;

    std::cin >> a >> i;

    if (i == 0) {
        inverter = 1;
    } else {
        inverter = (2 << (i - 1));
    }

    std::cout << (a ^ inverter);

    return 0;
}