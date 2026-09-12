#include <iostream>

int main_set_bit_value() {
    long long a;
    unsigned int i;

    std::cin >> a >> i;

    unsigned long long replacer = (2ull << 63) - 1;
    unsigned long long eraser;

    if (i == 0) {
        eraser = 1;
    } else {
        eraser = (2ull << i) - (2ull << (i - 1));
    }

    replacer -= eraser;

    std::cout << (a & replacer);

    return 0;
}