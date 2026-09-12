#include <iostream>
#include <vector>

int main_maximize_and() {
    int n;

    std::cin >> n;

    int max_and = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        int a_i;

        std::cin >> a_i;

        max_and = std::max(a_i, max_and);
    }

    std::cout << max_and;

    return 0;
}