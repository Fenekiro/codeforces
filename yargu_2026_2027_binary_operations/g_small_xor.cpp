#include <iostream>
#include <vector>

int main_small_xor() {
    int n;

    std::cin >> n;

    int max_xor = std::numeric_limits<int>::min();
    std::vector<int> arr = std::vector(n, 0);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        int current_xor = arr[i];

        max_xor = std::max(current_xor, max_xor);

        for (int j = i + 1; j < n; ++j) {
            current_xor ^= arr[j];

            max_xor = std::max(current_xor, max_xor);
        }
    }

    std::cout << max_xor;

    return 0;
}