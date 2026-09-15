#include <iostream>
#include <vector>

int main_dima_and_bad_xor() {
    int n, m;

    std::cin >> n >> m;

    std::vector<std::vector<int>> a(n, std::vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }

    std::vector<int> c(n, 0);
    int a_xor = 0;

    for (int i = 0; i < n; ++i) {
        c[i] = 1;

        a_xor ^= a[i][0];
    }

    if (a_xor == 0) {
        bool found_replacement = false;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i][j] != a[i][0]) {
                    c[i] = j + 1;
                    found_replacement = true;

                    break;
                }
            }

            if (found_replacement) {
                break;
            }
        }

        if (found_replacement) {
            std::cout << "TAK\n";

            for (int x : c) {
                std::cout << x << " ";
            }
        } else {
            std::cout << "NIE";
        }
    } else {
        std::cout << "TAK\n";

        for (int x : c) {
            std::cout << x << " ";
        }
    }

    return 0;
}