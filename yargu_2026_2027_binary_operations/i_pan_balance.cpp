#include <iostream>
#include <vector>
#include <numeric>

int main_pan_balance() {
    int n;

    std::cin >> n;
    std::vector<int> weights = std::vector(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        std::cin >> weights[i];
    }

    int total = std::accumulate(weights.begin(), weights.end(), 0);
    int ceiling = total / 2;
    std::vector<std::vector<int>> dp = std::vector(n + 1, std::vector(total + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= total; ++j) {
            dp[i][j] = dp[i - 1][j];

            if (weights[i] <= j) {
                dp[i][j] = std::max(dp[i][j], dp[i - 1][j - weights[i]] + weights[i]);
            }
        }
    }

    std::cout << total - 2 * dp[n][ceiling];

    return 0;
}