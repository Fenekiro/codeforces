#include <iostream>

int main() {
    int n;
    std::string a, b;

    std::cin >> n >> a >> b;

    long long count = 0;
    int zeroes = 0;
    int ones_with_pair = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == '0') {
            ++zeroes;
        } else if (a[i] == '1' && b[i] == '1') {
            ++ones_with_pair;
        } else {
            continue;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] == '0' && b[i] == '0') {
            count += ones_with_pair;
        } else if (a[i] == '1' && b[i] == '0') {
            count += zeroes;
        } else {
            continue;
        }
    }

    std::cout << count;
}