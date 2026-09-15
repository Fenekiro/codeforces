#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main_maximum_and_bits() {
    int n;

    std::cin >> n;

    std::vector<int> a(n, 0);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int max_end = (2 << 19) - 1;
    int max_number_to_be_removed = 0;

    for (int j = 0; j < 20; ++j) {
        std::unordered_map<int, std::vector<int>> numbers_j_digits = {
            {0, {}},
            {1, {}}
        };

        for (int i = 0; i < n; ++i) {
            if (std::format("{:020b}", a[i])[j] == '0') {
                numbers_j_digits[0].push_back(i);
            } else {
                numbers_j_digits[1].push_back(i);
            }
        }

        if (numbers_j_digits[0].size() == 1) {
            max_number_to_be_removed = numbers_j_digits[0][0];

            break;
        }
    }

    a.erase(a.begin() + max_number_to_be_removed);

    for (int i = 0; i < n - 1; ++i) {
        max_end &= a[i];
    }

    std::cout << max_end;

    return 0;
}