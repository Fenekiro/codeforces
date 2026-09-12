#include <iostream>
#include <vector>

bool binary_search(const std::vector<int>& arr, int number) {
    size_t left = 0;
    size_t right = arr.size();

    while (left < right) {
        size_t center = (right + left) / 2;

        if (arr[center] < number) {
            left = center + 1;
        } else if (arr[center] > number) {
            right = center;
        } else {
            return true;
        }
    }

    return false;
}

int main() {
    std::freopen("contest_11_09_2026/stream_files/collect.in", "r", stdin);
    std::freopen("contest_11_09_2026/stream_files/collect.out", "w", stdout);

    int n, m;

    std::cin >> n;

    std::vector<int> butterflies(n, 0);

    for (int i = 0; i < n; ++i) {
        std::cin >> butterflies[i];
    }

    std::cin >> m;

    for (int i = 0; i < m; ++i) {
        int butterfly_number;

        std::cin >> butterfly_number;

        if (binary_search(butterflies, butterfly_number)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}