#include <iostream>
#include <format>

int main_print_byte() {
    int a;

    std::cin >> a;

    std::cout << std::format("{:08b}", a);

    return 0;
}